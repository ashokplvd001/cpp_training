#include <iostream>
using namespace std;

void charArray4()
{
	char str1[20], str2[20];

	cout << "Enter the two strings : ";
	cin >> str1 >> str2;

	int res = strcmp(str1, str2);

	cout << "res : " << res << endl;

	if (res < 0)
		cout << "str1 is less then str2\n";
	else if ( res > 0 )
		cout << "str1 is greater then str2\n";
	else	
		cout << "Equal\n";


		 res = strncmp(str1, str2 , 4);

		cout << "res : " << res << endl;

		if (res < 0)
			cout << "str1 is less then str2\n";
		else if (res > 0)
			cout << "str1 is greater then str2\n";
		else
			cout << "Equal\n";
	

}