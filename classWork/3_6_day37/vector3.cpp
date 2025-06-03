#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main()
{
	unsigned int val = 0 ; 
	
	vector <unsigned int > scores; 

	cin >> val; 
	do
	{

		scores.push_back(val);

		cin >> val;

	} while (val != -1 );



	cout << "All Scores(Sorted) : ";
	for (auto& it : scores)
		cout << it << ' ' ;
	cout << endl;

	sort(scores.begin(), scores.end(), [](int a, int b) { return a > b;});

	cout << "Top 3 Scores : ";
	
	int i = 0; 
	for (auto it = scores.begin() ; it < scores.end(); it++)
	{
		if( i < 3 )
		cout << *it << ' ';
		i++;
	}

	cout << endl;

	cout << "Unique Scores(Sorted) : ";

	auto it = scores.begin();
	for ( ; it < scores.end() - 1; it++)
	{
		if (*it != *(it+1) )
			cout << *it << ' ';
		
	}
	if (*it != *(it - 1))
		cout << *it << ' ';
	cout << endl;


}