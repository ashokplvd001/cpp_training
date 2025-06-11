#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

char flag = 0;

class Print
{
	mutex m;
public:

	void fun()
	{
		thread t1(&Print::print, this , 'A');
		thread t2(&Print::print, this , 'B');
		thread t3(&Print::print, this , 'C');

		t1.join();
		t2.join();
		t3.join();
	}

	void print(char ch)
	{
		for (int i = 0; i < 5;)
		{
			lock_guard<mutex> lock(m);
			if (flag == (ch-'A') )
			{
				cout << ch << endl;
				i++;
				flag = (++flag % 3);
			}
			
		}
	}
};

int main()
{
	Print p;
	p.fun();

	/*
	thread t1(&Print::print, &p, 'A' );
	thread t2(&Print::print, &p, 'B');
	thread t3(&Print::print, &p, 'C');
	

	if( t1.joinable() )
	t1.join();

	if (t2.joinable())
	t2.join();
	
	if (t3.joinable())
	t3.join();
	*/
}