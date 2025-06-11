#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <set>
#include <tuple>
#include <list>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <unordered_map>
#include <algorithm>

using namespace std;

class FileManager
{
private :
	map<int, tuple <string, string>> filelist ;// fileNo , fileName , owner
	unordered_map < int, deque<pair<string, string> >>  accessList;	// fId , accessMode , owner
	unordered_map< int, int > frequency; // fId , frequency 
	unordered_map< string , int > timestamp;	// fId , time
	deque<int> deltedList; // fId 

	multimap <string, int> listByFName;	// Fname  , Fid
	
	string getTime()
	{
		time_t time_now = chrono::system_clock::to_time_t(chrono::system_clock::now());
		tm* local_time = localtime(&time_now);
		stringstream ss;
		ss << put_time(local_time, "%y-%m-%s %H:%M:%s");
		return ss.str();
	}

public :

	bool addFile(int fId, string fName , string owner )
	{
		filelist[fId] = { fName , owner };
		timestamp[getTime()] = fId;
		for (auto it = timestamp.begin(); it != timestamp.end(); it++)
		{
			if (it->second == fId)
			{
				timestamp.erase( it->first );
				break;
			}
		}
		
		listByFName.insert({fName, fId});
		return true;
	}

	bool accessFile(int fId, string accessMode ,string userName)
	{
		accessList[fId].push_back({ accessMode , userName });
		auto pair = frequency.find(fId);
		if (pair != frequency.end())
			(pair->second)++;

		timestamp[getTime()] = fId;
		for (auto it = timestamp.begin(); it != timestamp.end(); it++)
		{
			if (it->second == fId)
			{
				timestamp.erase(it->first);
				break;
			}
		}	
		return true;
	}

	bool deleteFile(int fId)
	{
		auto it1 = filelist.find(fId);
		if (it1 != filelist.end())
			filelist.erase(fId);
		
		auto it2 = accessList.find(fId);
		if (it2 != accessList.end())
			accessList.erase(fId);
		
		auto it3 = frequency.find(fId);
		if (it3 != frequency.end())
			frequency.erase(fId);


		for (auto it = timestamp.begin(); it != timestamp.end(); it++)
		{
			if (it->second == fId)
			{
				timestamp.erase(it->first);
				break;
			}
		}
		
		deltedList.push_back(fId);

		for (auto it = listByFName.begin(); it != listByFName.end(); it++)
		{
			if (it->second == fId)
			{
				listByFName.erase(it->first);
				break;
			}
		}
		return true;
	}

	bool searchOperations( string user)
	{
		cout << "Most recently accessed : \n";
		for (const auto& var : timestamp)
		{
			cout << var.first << "\t-\t" << var.second << endl;
		}

		vector <pair<int,int>> freq( frequency.begin() , frequency.end() )   ;

		std::sort(freq.rbegin(), freq.rend(),
			[](pair<int, int>& a, pair<int, int>& b)
			{ return a.second > b.second; }
		);

		cout << "Most accessed : \n";
		for (int i = 0 ; i < 3 && i < frequency.size() ; i ++ )
		{
			cout << freq[i].first << "\t->\t" << freq[i].second;
		}

		cout << " list by this user : " << user << " : \n";

		for (auto it = accessList.begin(); it != accessList.end(); it++)
		{
			
			for( auto  it2 = (it->second).begin() ; it2 != (it->second).end() ; it2++ )
			{
				if (it2->second == user)
				{
					cout << it->first << "\t-\t" << it2->first << endl;
				}
			}
		}
		return true;
	}

	void ListAllFiles()
	{
		cout << "List by FileName : \n";
		for (auto it = listByFName.cbegin(); it != listByFName.cend(); it++)
		{
			cout << it->first << "\t->\t" << it->second << endl;
		}

	}



};



int main()
{
	int opt = 0;
	int fId;
	string fName;
	string user; 
	string owner;
	string accessMode;

	FileManager fileManager;

	cout << "1. addFile\n2. accessFile\n3. delete\n4. search\n5. listAll\n6. exit\n";

	while (true)
	{
		cin >> opt;

		switch (opt)
		{
		default: cout << "Inavlid option\n";
			break;
		case 1: 
			cout << "Enter fid fname owner : ";
			cin >> fId>> fName>> owner;
			fileManager.addFile(fId, fName, owner);
			break;
		case 2 :
			cout << "Enter the fId accessmode user : ";
			cin >> fId >> accessMode >> user;
			fileManager.accessFile(fId, accessMode, user);
			break;
		case 3 :
			cout << "Enter the fId : ";
			cin >> fId;
			fileManager.deleteFile(fId);
			break;
		case 4 :
			cout << "Enter the user : ";
			cin >> user;
			fileManager.searchOperations(user);
			break;
		case 5 :
			fileManager.ListAllFiles();
			break;
		case 6 :
			return 0 ;

		}
	}


}