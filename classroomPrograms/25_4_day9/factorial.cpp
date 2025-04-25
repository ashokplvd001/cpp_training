#include <iostream>
using namespace std; 

int factorialFun(int );
void factorial()
{
	int num; 
	cout << "Enter the number : ";
	cin >> num; 
	int ret = factorialFun(num);
		cout << "factorial of " << num << " is : " << ret << endl;

}

int factorialFun(int num)
{
	if (num <= 1)
		return 1;
	return num * factorialFun(num - 1);
	// XXXX  return num * factorialFun( --num );
}