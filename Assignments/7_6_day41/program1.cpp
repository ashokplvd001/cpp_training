#include <iostream>
#include <string>
#include <exception>

using namespace std; 

class badLengthExeption
{
	int n;
public : 
	badLengthExeption(int n) : n( n ){}

	int what() { return n; }
};

bool userNameValidation( string userName )
{
	int minLength = 5;

	if (userName.size() < minLength)
	{
		throw badLengthExeption(userName.size());
	}
	else
	{
		char ch = userName.at(0);

		int  i = 1;

		for (  ; i <  userName.size() ; i++)
		{
			if (ch == 'w' && ( ch = userName.at(i)) == 'w')
				break;
			ch = userName.at(i);
		}

		if (i == userName.size() )
			return  true;
		else
			return false; 

	}


}

int main()
{
	int T; 

	cin >> T;
	string userName; 
	while (T--)
	{
		cin >> userName; 
		try {
			if (userNameValidation(userName))
				cout << "Valid\n";
			else
				cout << "Invalid\n";
			
		}
		catch (badLengthExeption e)
		{
			cout << "Too short : " << e.what() << endl;
		}
	}
	
	
}

