#include <iostream>
#include <thread>

using namespace std; 

void printNumbers(int x, int y)
{
	for (x; x <= y; x++)
		cout << x << endl;
}

int main()
{
	thread t1(printNumbers, 1, 10);
	thread t2(printNumbers, 11, 20);

	t1.join();
	t2.join();
}
