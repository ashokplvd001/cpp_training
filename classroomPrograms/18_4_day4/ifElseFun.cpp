#include <iostream>
using namespace std;

typedef struct users {
	int id; 
	int userType;		// 0 = admin , 1 = user 
	string userName; 
}USERS;

void dispMenuNU(string );
void dispMenuAU();

int ifElseFun()
{
	USERS u;
	cout << "Enter id : ";
	cin >> u.id;
	cout << "enter usertype(0/1) : " << endl;
	cin >> u.userType;
	cout << "Enter User Name : ";
	cin >> u.userName;

	if (u.userType == 0)
	{
		dispMenuAU();
	}
	else
	{
		dispMenuNU(u.userName);
	}
	cout << "Application ended successfuly" << endl;
	return 0;
}

void dispMenuNU(string name)
{
	cout << "user : " << name << " is logged in\n";
	cout<<"i am able to access user menu\n";
}
void dispMenuAU()
{
	cout << "i am able to access admin menu\n";
}