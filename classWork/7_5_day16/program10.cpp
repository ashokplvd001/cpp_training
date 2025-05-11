#include <iostream>
using namespace std; 

#define MAX 128 
void program10()
{
	char str[MAX] = { 0 };

	cin >> str;

	int i = 0, sum = 0 ; 

	while (str[i])
	{
	//	if( str[i] >= '0' && str[i] <= '9')
		if( isdigit( str[i]))
		sum = sum + str[i] - 48;
		i++;
	}
	cout << "sum = " << sum << endl;
}