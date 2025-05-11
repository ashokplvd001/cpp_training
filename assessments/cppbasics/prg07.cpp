/*
Discription: Write a Program to Find the Length of the String Without using strlen() Function
*/
#include <iostream>

using namespace std;

int main()
{
    char str[50];
    cin >> str;
    int length = -1;

    while (str[++length]);

    cout << "The length of the string is: " << length << endl;
}