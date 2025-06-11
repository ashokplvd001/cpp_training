#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex m;

void printNumbers(int N, bool flag)
{
	for (int i = 1; i <= N; i++)
	{
		m.lock();
		
			if (i % 2  == flag)
				cout << i << endl;
		
		m.unlock();
	}
}

int main()
{
	thread t1(printNumbers, 8, 0); // even
	thread t2(printNumbers, 7, 1); // even

	t1.join();
	t2.join();
}