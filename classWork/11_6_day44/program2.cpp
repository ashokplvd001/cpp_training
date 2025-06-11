#include <iostream>
#include <thread>
#include <Windows.h>
using namespace std;

void greet() { Sleep(1000); cout << "Helo from thread\n"; }

void modify(int& x) { x *= 2; }


int main()
{

	thread t1(greet);

	//Sleep(1000);
	cout << "Before t1\n";
	
	t1.join();		// blocking 
	//Sleep(1000);
	cout << "Before t2\n";

	int val = 10; 

	thread t2(modify, std::ref(val));

	cout << "val = " << val << endl;

	Sleep(1000);
	cout << "val = " << val << endl;
	t2.join();
	cout << "val = " << val << endl;
}
