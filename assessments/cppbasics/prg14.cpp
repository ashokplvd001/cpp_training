/*
Discription: Write a Program to Find the Factorial of a Number Using Loops
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int fact = 1;
    while (n > 1) {
        fact *= n;
        n--;
    }

    cout << "factorial is " << fact << endl;

}