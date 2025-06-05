#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std; 

int main()
{
	vector <string> fruits = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

	for (auto& f : fruits)
		cout << f << endl;
	cout << "========================\n";

	for (auto& f : fruits)
		transform(f.begin(), f.end(), f.begin(), ::tolower);

	sort(fruits.begin(), fruits.end(), [](string s1, string s2) { return  s1 < s2;});

	auto newEnd = unique(fruits.begin(), fruits.end());

	fruits.erase(newEnd, fruits.end());

	for (auto& f : fruits)
		cout << f << endl;
	cout << "========================\n";


}