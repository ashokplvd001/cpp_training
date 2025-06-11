#include <iostream>
#include <thread>
#include <mutex>
#include <Windows.h>
using namespace std;
mutex m;



void print(const string name)
{
	for (int i = 0; i < 10; i++)
	{
		Sleep(100);
		m.lock();
		cout << name << endl;
		m.unlock();
		Sleep(200);
	}
}

int main()
{
	thread t1(print , "ping");
	thread t2(print , "pong");

	t1.join();
	t2.join();
}