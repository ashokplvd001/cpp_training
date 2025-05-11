/*
Discription:Write a Program to Check Whether a Character is a Vowel or Consonant
*/
#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch; 

    switch (ch)
    {
    case 'A' :
    case 'a' :
    case 'E' :
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        cout << "the character is vowel\n";
        break;
    default : 
        cout << "The character is consonent\n";

    }

    return 0;
}


