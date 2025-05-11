/*
Discription: Write a Program to Remove Spaces From a String
*/
#include <iostream>

using namespace std;

int main()
{
    char str[50];
    cin.getline(str, 49);
    int j = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if ( str[i] != ' ' )
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    cout << str << endl;
}