#include <iostream>
using namespace std;

void calFun(int argc, char* argv[])
{
	switch (argv[1][0])
	{
	case '+' :
		cout << "add of two numbers is : "<< (atoi(argv[2]) + atoi(argv[3])) << endl;
		break;
	case '-':
		cout << "sub of two numbers is : "<< (atoi(argv[2]) - atoi(argv[3])) << endl;
		break;
	case '*':
		cout << "mul of two numbers is : "<< (atoi(argv[2]) * atoi(argv[3])) << endl;
		break;
	case '/':
		cout << "div of two numbers is : "<< (atoi(argv[2]) / atoi(argv[3])) << endl;
		break;
	default :
		cout << "invalid input" << endl;

	}
}