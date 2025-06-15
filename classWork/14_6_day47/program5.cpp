#include <iostream>
#include <crtdbg.h>
using namespace std;

void fun()
{
	new int[100000000]; 
}

int main()
{
	int i = 0;
	while (true)
	{
		cout << i++ << endl;
		fun();
	}
		
}