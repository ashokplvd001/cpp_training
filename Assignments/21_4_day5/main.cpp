#include <iostream>

using namespace std;

int main(int argc ,char * argv[] )
{
	/*
	cout << "argc : " << argc << endl;
	cout << " argv[0] : " << argv[0] << endl;
	cout << "argv[1] :" << argv[1] << endl;
	cout << "argv[2] :" << argv[2] << endl << endl;
*/
	for (int i = 0; i < argc; i++)
		cout << "argv[i] : " << i << " : " << argv[i] << endl;



		switch (argv[1][0])
		{
		case '+':
			cout << "add of two numbers is : " << (atoi(argv[2]) + atoi(argv[3])) << endl;
			break;
		case '-':
			cout << "sub of two numbers is : " << (atoi(argv[2]) - atoi(argv[3])) << endl;
			break;
		case '*':
			cout << "mul of two numbers is : " << (atoi(argv[2]) * atoi(argv[3])) << endl;
			break;
		case '/':
			cout << "div of two numbers is : " << (atoi(argv[2]) / atoi(argv[3])) << endl;
			break;
		default:
			cout << "invalid input" << endl;

		}

}