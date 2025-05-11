/*
Discription: 	Write a Program to Find the Second Smallest Element in an Array
*/
#include <iostream>

using namespace std;

int main()
{
int arr[5] = { 2 , 4 ,5 , 3 , 9 };
int n = 5;
    int first, second;

   

    first = second = INT_MAX;
    for (int i = 0; i < n; i++) {
        
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }

        
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        cout << "There is no second smallest element\n";
    else
        cout << " Second smallest element is " << second
        << endl;
}