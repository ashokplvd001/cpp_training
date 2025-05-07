#include <iostream>

using namespace std; 

short int display();
int add(int, int);
int sub(int, int);
int runable(int);

int main( int argc , char ** argv )
{
	int opt = 0; 
	if (argc > 1)
		opt = atoi(argv[1]);
	else opt = -1; 

	runable(opt);
}


int runable(int opt)
{
	if (opt == -1)
		opt = display();
	
	switch (opt)
	{
	case 1 :
		cout<<"sum = "<<add(15, 2)<<endl;
		break;
	case 2 :
		cout << "subtractiom = " << sub(15, 2)<<endl;
		break; 
	case 3 :
		cout << "exiting......\n";
		return 0;
	default : 
		cout << "Invalid option\n";
	}


}


short int display()
{
	short int opt; 
	cout << "1.Addition\n";
	cout << "2.Subtraction\n";
	cout << "3.exit\n";
	cout << "choose the option : ";
	cin >> opt; 
	return opt;
}

int add(int a, int b)
{
	return a + b; 
}

int sub(int a, int b)
{
	return a - b; 
}

