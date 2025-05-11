/*
Discription: Write a Program to Check Whether a Number is an Armstrong Number or Not
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int originalNum, remainder, result = 0 ,  n = 0;

    originalNum = num;


    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;


    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (num == result)
        cout << "its armstrong\n";
    else
        cout << "its not armstrong\n";

}