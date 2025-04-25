#include <iostream>
using namespace std;

void ifFun()
{
	int capacity = 100; 
	int curStorage;
	int maxAllowedStorage = 95 ; 
	cout << "Enter present capacity : ";
	cin >> curStorage;

	if (curStorage >= 95)
	{
		cout << "Storage is full , cant proceed" << endl;
		return ;
	}

	cout << "you can store items int the storage" << endl;


}