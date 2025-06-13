#include <iostream>
#include <thread>
#include <mutex>

using namespace std; 

mutex m;
condition_variable cv; 
bool flag = true; 

void threadX(string name , bool enable)
{
	for (int i = 0; i < 10; i++)
	{

		unique_lock<mutex> lock(m);
		cv.wait(lock, [enable] { return flag == enable; });
		cout << name << endl;
		flag = !flag ; 
		cv.notify_one();

	}
}

int main()
{
	thread t1(threadX, "ping", 1);
	thread t2(threadX, "pong", 0);
	t1.join();
	t2.join();
}