#include <iostream>

using namespace std; 

void ifelseifFun()
{

	string genre; 
	cout << "Enter the Genre : ";
	cin>> genre;

	if (genre[0] >= 48 and genre[0] <= 57)
	{
		cout << "genre cant start wih numeric characters\n";
		return ; 
	}

	for (int i = 0; genre[i]; i++)
	{
		if ( !( (genre[i] >= 65 && genre[i] <= 90) || ( genre[i] >= 95 && genre[i] <= 'z')) )
		{
			cout << "genre cant contain special chars\n";
			return;
		}
	}



	if (genre.compare("action") == 0)
	{
		cout << "Selected genre is action\n";
	}
	else if (genre.compare("comedy") == 0)
	{
		cout << "Selected genre is comedy\n";
	}
	else
	{
		cout << "Genre is not valid\n";
	}
	cout << "genre comaprision end\n";





	int amtInHnd;

	cout << "Enter the amount in hand\n";
	cin >> amtInHnd;

	if ( amtInHnd < 10 )
	{
		cout << "I cant get anything with this amount" << endl;
	}
	else if (amtInHnd >= 10 and amtInHnd <= 50 )
	{
		cout << "I can buy some snacks\n";
	}
	else if (amtInHnd > 50 and amtInHnd <= 100)
	{
		cout << "I can buy some roties\n";
	}
	else if (amtInHnd > 100 and amtInHnd <= 500)
	{
		cout << "I can buy biriyani\n";
	}
	else
	{
		cout << "I can buy anything\n";
	}



}