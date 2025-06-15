#include <iostream>
#include <vector> 
using namespace std;

int main()
{
	
	vector<int> oddlist; 
	int x = 1; 

	auto oddPrint = [&](int x) {
		vector <int> vlist;
		for (int i = 1; i < x ; i += 2)
		{
			vlist.push_back(i);
			oddlist.push_back(i);
			cout << i << ' ';
		}
		cout << endl;
		return vlist; 
	};

	auto vlist = oddPrint( 20);

	for (auto i : vlist)
		cout << i << ' ';
	cout << endl;


	for (auto i : oddlist)
		cout << i << ' ';
	cout << endl;

}