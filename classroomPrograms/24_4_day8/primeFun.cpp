#include <iostream>
using namespace std;

void primeFun()
{
	int num; 
	cout << "Enter the number : " ;
	cin >> num; 

	bool isPrime(int);
	if (isPrime( num ))
		cout << num << " is prime\n";
	else
		cout << num << " is not prime\n";
} 

bool isPrime(int num)
{
	if (num < 2)
		return false; 

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return false; 
		}
	}

	return true; 

}

