/*
Discription: Write a Program to Count the Number of Vowels
*/
#include <iostream>

using namespace std;

int main()
{
    char str[50];
    cin >> str; 

    int vowels = 0, i = 0;
    while (str[i])
    {
        switch (str[i])
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            vowels++;

        }
        i++;
    }

    cout << "vowels count is : "<<vowels << endl;
 
}