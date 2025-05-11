/*
Discription: Write a Program to Check the Prime Number
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i; 

    for ( i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            break;
    }

    if (i == n / 2 + 1)
        cout << "its prime\n";
    else
        cout << "its not prime\n";

}