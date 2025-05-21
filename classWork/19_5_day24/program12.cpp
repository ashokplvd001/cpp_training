#include <iostream>

using namespace std; 

#define sq( x ) x * x 
inline int square(int x)
{
	return x * x; 
}

void program12()
{
	int x = 3 ;

	cout << "inline / square = " << square(2 + x) << endl;
	cout << "preprocessing / sq = " << sq(2 + x) << endl;


}