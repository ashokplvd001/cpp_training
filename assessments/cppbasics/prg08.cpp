/*
Discription: Write a Program to Toggle Each Character in a String
*/
#include <iostream>

using namespace std;

int main()
{
    char str[50];
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    cout << "Toggled string: " << str << endl;

    return 0;
}