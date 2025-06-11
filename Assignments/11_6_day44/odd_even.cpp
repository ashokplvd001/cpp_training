#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

bool globaleFlag = true;

class Problem
{
	mutex m;
public :

	void threadspool()
	{
		thread t1(&Problem::Solution, this, 1, 1);
		thread t2(&Problem::Solution, this, 0, 0);

		t1.join();
		t2.join();

	}

	void Solution(bool functionality , bool  enable)
	{
		for (int i = 1; i <= 20; )
		{
			lock_guard<mutex> lock(m);
			if (globaleFlag == enable)
			{
				if (i % 2 == functionality)
					cout << i << endl;
				i++;
				globaleFlag = !globaleFlag;
			}
		}
	}
};

int main()
{
	Problem p;

	p.threadspool();
}
