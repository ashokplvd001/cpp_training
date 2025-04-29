#include <iostream>

void	printDigits();
void sliceAndCount(long int);

using namespace std; 

short int count0 = 0; 
short int count1 = 0;
short int count2 = 0;
short int count3 = 0;
short int count4 = 0;
short int count5 = 0;
short int count6 = 0;
short int count7 = 0;
short int count8 = 0;
short int count9 = 0;

void	printDigits();
void sliceAndCount(long int);

void digitsCount()
{
	cout << "size(int) : " << sizeof(int)<<endl;
	cout << "size(long int) : " << sizeof(long int)<<endl;
	cout << "size(long long int) : " << sizeof(long long int) << endl;

	long int num;
	num = 3433564432973;
	sliceAndCount(num);
	printDigits();

}

void sliceAndCount(long int num ) {

	int r; 
	while (num)	// while is flexible/suits to this problem then for .
	{
		r = num % 10;
		cout << "r : " << r << endl;
		switch (r)
		{
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		default:
			cout << "invalid digit\n";
			// no chance of degfault or fallthrough statment .
		}
		num /= 10;
	}

}


void printDigits()
{
		cout << "count 0 : " << count0 << endl;
		cout << "count 1 : " << count1 << endl;
		cout << "count 2 : " << count2 << endl;
		cout << "count 3 : " << count3 << endl;
		cout << "count 4 : " << count4 << endl;
		cout << "count 5 : " << count5 << endl;
		cout << "count 6 : " << count6 << endl;
		cout << "count 7 : " << count7 << endl;
		cout << "count 8 : " << count8 << endl;
		cout << "count 9 : " << count9 << endl;
	}