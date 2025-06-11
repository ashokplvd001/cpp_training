#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0, j; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                cout << arr[i] << " " << arr[j] << endl;
                break;
            }
        }

        if (j == n)
        {
            cout << arr[i] << " -1" << endl;
        }
    }


    return 0;
}