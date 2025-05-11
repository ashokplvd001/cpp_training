/*
Discription: Write a Program to Check Palindrome
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int temp = n;
    while (temp != 0) {
        ans = (ans * 10) + (temp % 10);
        temp = temp / 10;
    }

    if (n == ans)
        cout << "its palandrom\n";
    else
        cout << "its not palandrom\n";

}