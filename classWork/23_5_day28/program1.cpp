#include <iostream>
#include <vector>
using namespace std; 

void program1()
{
	vector <int> el;
	cout << "capacity :" << el.capacity() << endl;
	cout << "size : " << el.size() << endl;

	for (int i = 0; i < 10; i++)
	{
		el.push_back(20);
		cout << "capacity :" << el.capacity() << endl;
		cout << "size : " << el.size() << endl;
	}

	cout << "----------------\n";

	for (int i = 0; i < 12; i++)
	{
		el.pop_back();
		cout << "capacity :" << el.capacity() << endl;
		cout << "size : " << el.size() << endl;
	}

}