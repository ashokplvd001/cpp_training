/*
Description :- Start with a function that takes the current energy (`n`) as input.
- **Recursion Base Case**: Stop when energy becomes zero or less.
*/


#include <iostream>
void Fun(int num);
using namespace std;	

void main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;

	Fun(num);

}

void Fun(int num)
{
	if (num == 0)
	{
		cout << num << endl;
		return;
	}
	cout << num << "->";
	Fun(num / 2);
}

/*
OUTPUT :
Enter the number : 18
18->9->4->2->1->0
*/