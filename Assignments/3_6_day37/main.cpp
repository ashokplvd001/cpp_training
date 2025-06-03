#include <iostream>
#include <array>

using namespace std; 

int main()
{
	string number;

	cout << "Enter number : ";

	cin >> number;

	array<int, 9> frequency = { 0, };

	const char* ptr = number.c_str();

	while (ptr < ( number.c_str() + number.size()) )
	 {
		if (*ptr >= '1' && *ptr <= '9')
			frequency.at(*ptr - '1')++ ;
		
					ptr++;
	}

	int large = 0, small = 0;

	large = small = frequency.at(0) ;

	for (int i = 1; i < 9; i++)
	{
		frequency.at(i) *= (i+1);

		if (frequency.at(i) > large)
			large = frequency.at(i);
		else if( frequency.at(i) < small)
			small = frequency.at(i);

	}
		

	cout << "God number is : " << large - small << endl;

}