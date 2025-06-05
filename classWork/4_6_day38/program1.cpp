#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	list<string> tasks;

	string t ; 
	int opt = 0;

	cout << "1. add\n2. urgent\n3. remove\n4. show\n5. exit\n";
	
	while( true )
	{
		cin >> opt; 

		switch(opt)
		{
			default : 
				cout << "Invalid option\n";
				break;
			case 1 :
				cout << "Enter the taskName : ";
				cin >> t ;
				tasks.push_back(move(t));
				break;
			case 2 :
				cout << "Enter the taskName : ";
				cin >> t;
				tasks.push_front(move(t));
				break;
			case 3 :
				cout << "Enter the taskName : ";
				cin >> t;
				tasks.remove(t);
				break;
			case 4 :
				for (auto& str : tasks)
					cout << str << "\t->\t";
			case 5 :
				break;
		}
	}
}