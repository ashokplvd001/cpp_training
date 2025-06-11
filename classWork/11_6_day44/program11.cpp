#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std; 

//mutex m;

class Counter
{
	int x; 
public :
	Counter() : x(0){}
	void increment() {
		for (int i = 0; i < 5; i++)
		{
			x += 2; 
			cout << x << endl;
		}
	}
	int getX() { return x; }
};


int main()
{
	Counter c; 
	c.increment();
	cout << c.getX() << endl;
}