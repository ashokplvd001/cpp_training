#include <iostream>
#include <thread>
#include <Windows.h>
#include <mutex>

using namespace std;

int amt = 0;
mutex m;

void addAmt(int x)
{
	m.lock();
	cout << "amount add : " << amt << endl;
	amt += x;
	Sleep(1000);
	m.unlock();
	
}

void subAmt(int y)
{
	m.lock();
	cout << "amount sub : " << amt << endl;
	amt -= y;
	Sleep(1000);
	m.unlock();
}

void foo()
{
	thread t1(addAmt, 150);
	thread t2(subAmt, 100);


	// it dont wait till the thread finish , it will excute parallely and go  .
	// if we use join this function will hold untill the that joined thread finish 
	t2.detach();		
	cout << "Amount = " << amt << endl;

	t1.detach();
	cout << "Amount = " << amt << endl;

}

int main()
{
	foo();
	
	Sleep(4000);
	cout << "Amt " << amt << endl;
}