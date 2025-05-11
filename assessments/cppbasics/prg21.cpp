/*
Discription: Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers
*/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2,a , b;
    cin >> a;
    cin >> b;

    num1 = a;
    num2 = b; 

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

    int lcd = (a * b) / num1;

    cout << "lcd = " << lcd << endl;

}