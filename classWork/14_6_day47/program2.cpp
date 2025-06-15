#include <iostream>

using namespace std; 
int main()
{
	auto cal = [](int a, int b, char op)
		{
			switch (op)
			{
			case '+':return a + b;
			case '-':return a - b;
			case '*': return a * b;
			case '%': return a % b;
			}
			return -1;
		};


	cout << "add = " << cal(4, 5, '+') << endl;
	cout << "sub = " << cal(14, 5, '-') << endl;
	cout << "mul = " << cal(4, 5, '*') << endl;
	cout << "div = " << cal(4, 5, '%') << endl;

}