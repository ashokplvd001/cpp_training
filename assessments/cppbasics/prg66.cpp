/*
Description :Extract the last digit of a number using the modulus operator (n % 10).
Recursion Base Case: When n becomes zero, stop.
Logic: Print the current digit, then recursively call the function with n / 10 to remove the last digit.

*/


#include <iostream>
void Fun(int);
using namespace std;	

void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	Fun(num);
	cout << endl;
}

void Fun(int num)
{

	if (num == 0)
		return;

	cout << num % 10 << ' ';
	Fun(num / 10);


}

/*
OUTPUT :
Enter the number : 14325
5 2 3 4 1
*/