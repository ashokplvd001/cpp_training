/*
Discription: Write a Program to Calculate the Greatest Common Divisor of Two Numbers
*/
#include <iostream>

using namespace std;

int main()
{
    int num1 ,num2 ;
    cin >> num1;
    cin >> num2;

    int res;

    if (num1 > num2)
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    res = num2 % num1;
    
    while (res)
    {
        num2 = num1; 
        num1 = res;
        res = num2 % num1;
    }

    cout << "gcd is " << num1 << endl;


}
