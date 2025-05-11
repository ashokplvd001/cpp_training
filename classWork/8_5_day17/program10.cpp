#include <iostream>

using namespace std;
void printN(int);

void program10()
{

	int n = 1;

	printN(n);
	//printN2(n);
}


void printN(int n)
{
	while (cout << n++ << ' ', n <= 10)
	{
	}
}