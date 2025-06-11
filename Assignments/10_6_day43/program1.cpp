#include <iostream>
#include <stack>

using namespace std;

class problem
{
public : 
	bool solution(char* arr)
	{
		stack<char > s; 
		int i = 0; 
		char ch = 0; 
		while ( ch = arr[i++])
		{
			if (s.empty())
			{
				s.push(ch);
				continue;
			}
			
			if ( ch == ')')
			{
				if (s.top() == '(')
					s.pop();
				else
					s.push(ch);
			}
			else if( ch == '}' )
			{
				if (s.top() == '{')
					s.pop();
				else
					s.push(ch);
			}
			else if (ch == ']')
			{
				if (s.top() == '[')
					s.pop();
				else
					s.push(ch);
			}
			else
				s.push(ch);



		}

		if (s.empty())	return true;
		else return false;
	}
};

int main()
{

	problem p;
	cout << "It is : " << ( p.solution((char*)"{([]([)])[]}") ? "Balance" : "Unbalance" )<<endl ;
	cout << "It is : " << (p.solution((char*)"{([]()[])[]}") ? "Balance" : "Unbalance") << endl;

}