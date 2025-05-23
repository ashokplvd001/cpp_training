#include <iostream>

using namespace std;

class BankAccount2
{
private:
	int accNo;
	static int accountCount;
public:
	BankAccount2()
	{
		accNo = ++accountCount;
	}

	static int getAccountCount()
	{
		// cant use non static member of class in static member function
		return accountCount;
	}


	void display ()
	{
		cout << "account no : "<<accNo << endl;
	}
};


//int BankAccount::id = 12 ;

int BankAccount2::accountCount = 1000 ;

void program5()
{
	BankAccount2 * a = new BankAccount2[5] ;


	cout << "Account count : " <<BankAccount2::getAccountCount() << endl;
	cout << "Account count : " << a[0].getAccountCount() << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Coudtomer[" << (i + 1) << "] Accountno : " ;
		a[i].display();
	}

	

}