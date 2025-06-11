#include <iostream>
#include <thread>
#include <cstdlib>

using namespace std;

void backGround(int &val)
{
	this_thread::sleep_for(chrono::seconds(8));
	cout << "BackGround task done\n";
	cout << "val from thread = " << val << endl;
}

void end()
{
	cout << "main Ended\n";
}
int main()
{
	int val = 10;
	thread t1(backGround , std::ref(val) );

	t1.detach();

	cout << "Main is not blocked\n";

	this_thread::sleep_for(chrono::seconds(5));
	cout << "val from main = " << val << endl;
	atexit(end);

	return 0; 

}
