#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <thread>
#include <fstream>


using namespace std ; 

class Packet
{
	int packetId ; 
	string protocol ; 
	int p_size ; 
public : 
	inline Packet( int packetId , string protocol , int size ) 
	{
		this->packetId = packetId ; 
		this->protocol = protocol ;
		this->p_size = size ;	
	} 
	inline int getPacketId () noexcept
	{
		return packetId ; 
 	}
	inline string getProtocol() noexcept
	{
		return protocol ; 
 	}
	inline int get_P_size() noexcept
	{
		return p_size ; 
 	}
	void display()
	{
		cout<<"Packet "<<packetId<<" | " <<protocol <<" | " 
			<< p_size <<" bytes"<<endl; 
	}
};
////////////////////////////////////
enum LogLevel
{
	INFO ,
	DEBUG , 
	WARNIG ,
	ERROR 
};
//////////////////////////////////////
class Logger 
{
	ofstream logFile ;

	string levelToString( LogLevel level );
	string getPresentTime() ;
public : 
	Logger( const string & fileName );		
	inline ~Logger();
	bool writeLog( LogLevel level , string content ) ;
	
};

Logger::Logger( const string & fileName )
	{	
		logFile.open( fileName , ios::app );
		//logFile.open( fileName , ios::tranc );
		
		try {
			if( !logFile.is_open() )
			throw ios_base::failure ("Failed to open logFile") ; 
		}
		catch( const ios_base::failure & e  )
		{
			cerr<<"Caught ios_base::failure : "<<e.what()<<endl ;
			return ;
		}
		catch(...)
		{	
			cout<<"Some error occured in Log file opening block\n" ;
		}	
		logFile <<"\n========================================\n" ;
		writeLog( DEBUG , "Log file opened\n---------------------------------" );
	}



inline Logger::~Logger() noexcept
{	
	try
	{
		if( !logFile.is_open() )
		throw ios_base::failure("Failed to close error bcz the file discripter not existed") ; 

	}	 
	catch( const ios_base::failure & e )
	{
		cout<<"Caught ios_base::failure "<<e.what()<<endl;
		return ;
	}
	
	logFile<<"---------------------------------\n" ;
	writeLog( DEBUG , "closing log file\n========================================\n\n" );
 
		logFile.close() ;
}


string Logger:: levelToString( LogLevel level )
{
	switch( level )
	{
		default : return string("UNKNOWN") ;
		case 0 : return string("INFO") ;
		case 1 : return string("DEBUG") ;
		case 2 : return string("WARNIG") ;
		case 3 : return string("ERROR") ;
	}
}

string Logger:: getPresentTime()
{
	auto now = chrono::system_clock::now() ;
	time_t timeNow = chrono::system_clock::to_time_t( now );
	return ctime( &timeNow ) ;
}

bool Logger:: writeLog( LogLevel level , string content )
{	
	try 
	{	
		if( ! logFile.is_open() ) 
			throw ios_base::failure ("Log file not opened connot write log" ) ;
	}
	catch(const ios_base::failure & e )
	{
		cout<<"Caught ios_base::failure : "<<e.what() <<endl ;
		return false ; 
	}
	catch(...)
	{	
			cout<<"Some error occured in write Log block\n" ;
	}	

	string time_now = getPresentTime();

	if( time_now[ time_now.size() - 1 ] == '\n' ) 		// if new line existed at end remove it
		time_now[ time_now.size() -1 ] = '\0' ;
	
	logFile << " [ "<< levelToString( level ) << " ] " << time_now << " | " << content << endl ;
	return true ; 
}

//////////////////////////

class PacketManager
{
	map <string, vector<Packet>> packetList;
public:
	PacketManager() { packetList.clear(); }
	~PacketManager() { packetList.clear(); }

	bool ReadFromFile(string packetsFileName , Logger & logger)
	{
		ifstream packetFile(packetsFileName, ios::in);

		try
		{
			if (!packetFile.is_open())
				throw ios_base::failure(packetsFileName + " Failed to open");
		}
		catch (const ios_base::failure& e)
		{
			cout << "Captured ios_base::failure exeption " << e.what() << endl;
			logger.writeLog(ERROR, "Failed to open packets.txt\n");
			return false;
		}
		catch (...)
		{
			cout << "Error occured in file opening block" << endl;
			logger.writeLog(ERROR, "Failed to open packets.txt\n");
			return false;
		}

		logger.writeLog(DEBUG, "Packets.txt file opened successfully\n");

		int packetId, p_size;
		string protocol;

		while (!packetFile.eof())
		{
			if (!(packetFile >> packetId >> protocol >> p_size))
				break;

			Packet p(packetId, protocol, p_size);

			// key and value
			packetList[protocol].push_back(p);
		}
		packetFile.close();

		if (packetList.empty())
		{
			cout << "No contents in file\n";
			logger.writeLog(DEBUG, "No content existed in file");
			return false;
		}


		cout << "succefully Read packets info from file\n";
		logger.writeLog(DEBUG, "Successfully read from file");
		return true;
	}

	void showList(string protocol, Logger& logger)
	{
		auto pair = packetList.find(protocol);


		try
		{
			if (pair == packetList.end())
				throw invalid_argument("Packet list dont have the requested protocol");
		}
		catch (const exception& e)
		{
			cout << "Caught invalid_argument exception " << e.what() << endl;
			logger.writeLog(ERROR, protocol + " not existed in packets list");
			return;
		}
		catch (...)
		{
			cout << "No packets in the list with this protocol\n";
			logger.writeLog(ERROR, protocol + " not existed in packets list");
			return;
		}

		auto packetT = pair->second;


		try
		{
			if (packetT.empty())
				throw invalid_argument("No packets in this protocol list");
		}
		catch (invalid_argument& e)
		{
			cout << "Caught invalid_argument exception " << e.what() << endl;
			logger.writeLog(ERROR, protocol + " : No packets in this protocol list");
			return;
		}
		catch (...)
		{
			cout << protocol << " : No packets in this protocol list" << endl;
			logger.writeLog(ERROR, protocol + " : No packets in this protocol list");
			return;
		}

		for (auto p : packetT)
		{
			p.display();
			logger.writeLog(INFO, "packetID " + to_string(p.getPacketId()) + " | " + "Protocol " +
				p.getProtocol() + " | " + "packetSIze " +
				to_string(p.get_P_size()));
		}

		return;
	}

	void checkForLarge(Logger & logger)
	{
		try
		{
			if (packetList.empty())
				throw invalid_argument("No packets present");
		}
		catch (invalid_argument& e)
		{
			cout << "Caught invalid_argument exception " << e.what() << endl;
			logger.writeLog(ERROR,  "No packets in list ");
			return;
		}
		catch (...)
		{
			cout << "No packets in list" << endl;
			logger.writeLog(ERROR, "No packets in list " );
			return;
		}

		int count = 0;

		for (auto pairT : packetList)
		{
			auto protocolT = pairT.second;
			for (auto packetT : protocolT)
			{
				if (packetT.get_P_size() > 1000)
				{
					packetT.display();
					logger.writeLog(WARNIG, "packetID " + to_string(packetT.getPacketId()) + " | "
						+ "Protocol " + packetT.getProtocol() + " | " + "packetSIze " +
						to_string(packetT.get_P_size()));
					count++;
				}
			}
		}
		if (count == 0)
		{
			cout << "No packet is larger then limit\n";
			logger.writeLog(INFO, "No packet is larger then limit");
		}
	}

};


int main()
{
	int opt = 0;

		cout << "1. To read protocols from file\n";
		cout << "2. show the packets of the perticular protocol\n";
		cout << "3. show the large size protocols\n";
		cout << "4. Export logs\n";
		cout << "0. exit\n";

		Logger logger( "netmon_log.txt");
		PacketManager packetManager;
		string procolName;
		do
		{
			cin >> opt;
			switch(opt )
			{
			default :
				cout << "Invalid arguments\n";
				break;
				case 1:
					packetManager.ReadFromFile("packets.txt", logger);
					break;
				case 2 :
					cout << "Enter the protocol name : ";
					cin >> procolName;
					packetManager.showList(procolName , logger);
					break;
				case 3 :
					packetManager.checkForLarge( logger );
					break;
				case 4:
					cout << "Logs saved\n";
					break;
				case 0 :
					break;

			}
			

		} while (opt);


		
}



