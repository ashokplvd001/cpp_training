#include <iostream>
#include <iterator>
#include <deque>
#include <algorithm>
#include <list>

using namespace std; 

int main()
{
	deque<char > d = { 'A' , 'B' , 'C' , 'D' };

	list <int> l = { 1 , 2 , 3 };
	auto it = d.begin();

	cout << it[1] << endl;

	auto it = l.begin(); 
	//cout << itl[1] << endl;
}
