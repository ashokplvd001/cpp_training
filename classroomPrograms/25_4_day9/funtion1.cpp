#include <iostream>
using namespace std; 

int f1(int);
void function1()
{
	
	int ret = 0; 
	ret = f1(5);
	cout << "ret : " << ret << endl;
	return;
}

int f1(int v)
{
	//cout << v<<endl;
	if (v <= 0)
		return 1; 

	v--;
	f1(v);
	cout << v << endl;

	return 1; 
}
