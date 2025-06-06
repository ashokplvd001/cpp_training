#include <iostream>
#include <set>
using namespace std;

int main()
{
	set <string> banned = { "bad", "evil", "vulgar" };

	string input; 

	input.resize(100, 0);

	cin.getline( (char *) input.c_str() , 99 ); 

	int pos = 0; 

	for (auto& temp : banned)
	{

		while( true)  {
			pos = input.find(temp);

			if (pos != string::npos)
			{
				input.erase(pos, temp.size()+1 );
			}
			else
				break;
		} 
	}

	cout << input << endl;
}