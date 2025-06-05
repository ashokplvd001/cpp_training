#include <iostream>
#include <forward_list>

using namespace std; 

template <typename T1 >
class logManager
{
	forward_list<T1> log;
	int count;
public : 
	logManager()
	{
		count = 0; 
	}
	void add(T1 arg)
	{
		if (count == 3)
		{
			auto it = log.before_begin();
			it++ ;
			it++; 
			log.erase_after(it);
		}
		
		
		if (count < 3)
			count++;

		log.push_front(arg);
	}
	
	void showList()
	{
		for (auto& it : log)
			cout << it << endl;
		cout << "-------------\n";
	}

};

int main()
{
	
	logManager<string> log;

	log.add(string("LogA"));
	log.add(string("LogB"));
	log.showList();

	log.add(string("LogC"));
	log.add(string("LogD"));
	log.showList();

	log.add(string("LogE"));
	log.add(string("LogF"));
	log.showList();




}