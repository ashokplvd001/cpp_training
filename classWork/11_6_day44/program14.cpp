#include <iostream>
#include <thread>
#include <mutex>

using namespace std; 

mutex m; 
bool flag = true  ;

void printpong( )
{
		for (int i = 0; i < 5;  )
		{
			
			if (flag)
			{
				m.lock();
				cout << "ping" << endl;
				flag = false;
				i++;
				m.unlock();
			}
			
		}		
}

void printping()
{
	for (int i = 0; i < 5; )
	{
		m.lock();
		if (!flag)
		{
			cout << "pong" << endl;
			flag = true;
			i++;
		}
		m.unlock();
	}
}


int main()
{
	thread t1(printping);
	thread t2(printpong);

	t1.join();
	t2.join();
}