/*
Discription: Write a Program to Find the Nth Term of the Fibonacci Series
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int first = 0, second = 1, ans=0;


    for (int i = 2; i <= num; i++) {
        ans = first + second;
        first = second;
        second = ans;
    }

    cout << "nth fibioces is : " << ans << endl;


}