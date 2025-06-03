#include <iostream>
#include <array>
#include <algorithm> // for sort, reverse

using namespace std; 
int main() {
    
    // Declare and initialize an array of 5 integers
  /*
    int* d_arr = new int[0];
    cout << "d arr = " << d_arr << endl;
    */

    std::array<int, 5> arr1 = { 4, 6 };

    std::cout << "Size of array: " << arr1.size() << std::endl;
    std::cout << "Is array empty? " << (arr1.empty() ? "Yes" : "No") << std::endl;

    int n = 0; 

    cin>> n; 


    std::array<int, -1> arr ;
//    std::array<int, -1> arr;
    /*
    std::cout << "Size of array: " << arr2.size() << std::endl;
    std::cout << "Is array empty? " << (arr2.empty() ? "Yes" : "No") << std::endl;

    std::array<int, 5> arr2;
    */

    std::cout << "Size of array: " << arr.size() << std::endl;
    std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

     arr = { 1, 4, 3, 2, 5 };
     std::cout << "Size of array: " << arr.size() << std::endl;
     std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

    // Accessing elements
    std::cout << "Element at index 2 (using at): " << arr.at(2) << std::endl;
    std::cout << "First element: " << arr.front() << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;

    // Size and empty check
    std::cout << "Size of array: " << arr.size() << std::endl;
    std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

    // Fill array
    arr.fill(7);
    std::cout << "After fill: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Reassign values
    arr = { 1, 4, 3, 2, 5 };

    // Sort array
    std::sort(arr.begin(), arr.end());
    std::cout << "After sorting: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Reverse array
    std::reverse(arr.begin(), arr.end());
    std::cout << "After reversing: ";
    for (int i : arr) std::cout << i << " ";
    std::cout << std::endl;

    // Data pointer access
    int* p = arr.data();
    std::cout << "Pointer to first element: " << *p << std::endl;

  

    return 0;
}