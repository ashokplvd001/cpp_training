#include <iostream>
#include <thread>
#include <Windows.h>

using namespace std; 

int amt = 0; 

void addAmt(int x)
{
	cout << "amount add : " << amt << endl;
	amt += x; 
	Sleep(10);
}

void subAmt(int y)
{
	cout << "amount sub : " << amt << endl;
	amt -= y;
}

int main()
{
	thread t1(addAmt, 150);
	thread t2(subAmt, 100);

	t2.join();
	cout << "Amount = " << amt << endl;

	t1.join();
	cout << "Amount = " << amt << endl;

}