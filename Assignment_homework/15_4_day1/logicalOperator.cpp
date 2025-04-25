/*
Description : Logical operation program using
Author : Ashok G
DOC : 15-4-25
version : 0.1v
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 5, c = 7;
    if (!a)
        cout << "a is zero\n";

    if (a < c && b < c)
        cout << "c is large";

    if (a < b || a < c)
        cout << "a is not large";
}