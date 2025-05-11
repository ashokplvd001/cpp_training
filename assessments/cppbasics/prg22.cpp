/*
Discription: 	Write a Program to Find the Smallest and Largest Element in an Array
*/
#include <iostream>

using namespace std;

int main()
{
    int arr[5] = { 5 , 4 , 6 , 8 , 7 };

    int small = arr[0];
    int large = arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
        else if (arr[i] > large) {
            large = arr[i];
        }
    }

    cout << "large " << large << endl;
    cout << "small " << small << endl;

}