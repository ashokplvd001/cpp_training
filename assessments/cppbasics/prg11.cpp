/*
Discription: Write a Program to Remove All Characters From a String Except Alphabets
*/
#include <iostream>

using namespace std;

int main()
{
    char str[50];
    cin >> str;

    int j = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if ( ( str[i] >= 'A' && str[i] <= 'Z' ) || ( str[i] >= 'a' && str[i] <= 'z' ) )
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    cout << str << endl;


}