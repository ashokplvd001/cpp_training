#include <iostream>

using namespace std; 

class BankAccount
{
private :
	int id; 
	static int val  ;
public :
	void display()
	{
		cout << "Value of val : " << val << endl ;
	}
};


//int BankAccount::id = 12 ;

int BankAccount::val ; 

void program4()
{
	BankAccount b ;

	b.display();
	
}