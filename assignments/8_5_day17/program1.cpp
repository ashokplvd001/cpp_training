#include <iostream>

using namespace std;
int octalToDec(int);
int decToOctal(int);
unsigned long long int decToBinary(int );
//unsigned long long int octToBinary(int);

void program1()
{
	int n;

	cin >> n;
	/*
	int dec1 = octalToDec(n);
	cout << "dec " << oct;
	*/
	/*
	int oct1 = decToOctal(n);
	cout << "oct : " << oct1 << endl;
	*/

	
	unsigned long long int bin1 = decToBinary(n);
	cout << "bin1 : " << bin1 << endl;
	


}
unsigned long long int decToBinary(int n)
{
	unsigned long long int sum = 0 , digits = 1 ;

	int res = 0; 


	while (n)
	{
		res = n % 2;
		sum = sum + res * digits ;
			digits *= 10;
			n /= 2;
	}
	return sum;

}





int decToOctal(int n)
{
	int sum = 0;
	int res = 0;
	int digits = 1;

	while (n)
	{
		res = n % 8;
		sum = sum + res * digits;

		digits = digits * 10;
		n /= 8;
	}
	return sum;

}

int octalToDec(int n)
{

	int sum = 0;
	int res = 0;
	int digits = 0;
	while (n)
	{
		res = n % 10;
		sum = sum + res * pow(8, digits);
		n /= 10;
		digits++;
	}

	return sum;
}
