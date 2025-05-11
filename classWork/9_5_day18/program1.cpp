#include <iostream>

using namespace std;


//this is for binary , octal , decimal . for hexa decimal it is different 
unsigned long long int convertion(unsigned long long int num, int from, int to);

void program1()
{
	unsigned long long int num = 0 ;
	int from = 0, to = 0; 

	cout << "Enter from base : ";
	cin >> from ; 
	cout << "Enter to base : ";
	cin >> to;
	cout << "Enter the number  : ";
	cin >> num;

	unsigned long long int result = convertion(num, from, to);
	cout << "result  = " << result << endl;

}

unsigned long long int convertion(unsigned long long int num , int from , int to )
{
	unsigned long long int sum = 0; 

	int res = 0, digits = 0; 

	while (num)
	{
		res = num % to ;
		sum = sum + res * pow(from, digits);
		num /= to ; 
		digits++;
	}

	return sum;

}