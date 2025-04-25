/*
Description : Assignment operation program using
Author : Ashok G
DOC : 15-4-25
version : 0.1v
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = a; // Asign op
    cout << "b = " << b;

    b += 2; // Add and assign
    cout << "b = " << b;

    b -= 2; // sub and assign
    cout << "b = " << b;

    b *= 2; // mul and assign
    cout << "b = " << b;

    b /= 2; // div and assign
    cout << "b = " << b;

    b %= 2; // mod and assign
    cout << "b = " << b;

    return 0;
}