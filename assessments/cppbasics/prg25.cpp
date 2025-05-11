/*
Discription: 	Write a Program to Check if the Given String is Palindrome or Not
*/
#include <iostream>

using namespace std;

int main()
{
    char str[50];
    cin >> str;
    int len = strlen(str) , i = 0;

    for ( i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            break;
        }
    }

    if (i == len / 2)
        cout << "yes ,its palandrom\n";
    else
        cout << "no , its not palanfrom\n";

}