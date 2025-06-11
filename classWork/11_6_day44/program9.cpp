#include <iostream>
#include <thread>
#include <mutex>

using namespace std; 

mutex m;

int count = 0; 

void counter(string name)
{
	while( true)
	{
		m.lock();
		if (::count <= 100)
			cout << name << " - " << ::count++ << endl;
		else
		{
			m.unlock();
			break;
		}

		m.unlock();
		
	}
}

int main()
{
	thread t1(counter, "thread1");
	thread t2(counter, "thread2");
	thread t3(counter, "thread3");

	t1.join();
	t2.join();
	t3.join();
}

