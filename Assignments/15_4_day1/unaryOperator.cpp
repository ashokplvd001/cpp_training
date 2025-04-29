/*
Description : ternary operation program using
Author : Ashok G
DOC : 15-4-25
version : 0.1v
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 6, c = 12;

    int x = (a < b) ? (c < b) ? b : c ? (a < c) ? c : a;

    cout << "The largest number is " << x << endl;
    return 0;

}