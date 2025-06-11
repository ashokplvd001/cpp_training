#include <iostream>
#include <vector>

using namespace std; 

int main()
{
	vector<int> vec = { 10 , 20 , 30 , 40 , 50 };

	vector<int>::const_iterator it; 

	for (it = vec.cbegin(); it != vec.cend(); ++it)
		cout << *it << " ";
	cout << "=============\n"; 

	for (it = vec.cend(); it != vec.cbegin(); it++)
		cout << *it << " ";
	cout << "=============\n";

}