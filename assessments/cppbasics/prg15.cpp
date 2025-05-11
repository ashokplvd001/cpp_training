/*
Discription: Write a Program to Find a Leap Year or Not
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = false;

    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 != 0)
                flag = false;
            else
                flag = true;
        }
        else
            flag = true;
    }
    else
        flag = false; 

    if (flag == true)
        cout << "its leap year\n";
    else
        cout << "its not leap year\n";

}