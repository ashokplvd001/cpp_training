#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;



class Counter
{
	int x;
	mutex m;
public:
	Counter() : x(0) {}
	void increment(string name) {
		for (int i = 0; i < 5; i++)
		{
			lock_guard<mutex> lock(m);
			x += 2;
			
			cout << name << " - " << x << endl;
			
		}
	}
	int getX() { return x; }
};


int main()
{
	Counter c;

	thread t1(&Counter::increment, &c, "thread 1");
	thread t2(&Counter::increment, &c, "thread 2");

	t1.join();
	t2.join();

	//c.increment();
	cout << c.getX() << endl;
}