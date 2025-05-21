#include <iostream>

using namespace std; 

typedef struct _address
{
	int hNo;
	string city;

}Address;


typedef struct _employee
{
	int id;
	string name; 

	// this below unames structure will work by it is not good practice  
	// as it is structure of date type , so we use it many places , 
	// if we declare inside here , it is not like usable by other structure 
	// we have to create again in other place  ,so its not efficient way , 
	// so declare outside and use by any other structure or use as solo date object 
	struct		
	{
		// tight bound to this structure , we cants use out side the structure ,
		//  even we name is as struct _date or just unamed structure both same . 
		int day; 
		int month; 
		int year; 
	}joingDate;

	Address empAddress;

}Employee ;

void program2()
{
	Employee e1 = { 101 , "ashok" , 16 ,3 , 2001 };

	e1.empAddress.hNo = 123;
	e1.empAddress.city = "bangalore";
	
	cout << "Employee id : " << e1.id << endl;
	cout << "Employee name : " << e1.name << endl;
	cout << "Employee joing date : "
		<< e1.joingDate.day << ':' << e1.joingDate.month << ':' << e1.joingDate.year << endl;
	cout << "Employee address : " << e1.empAddress.hNo << " , " << e1.empAddress.city<<endl ;

	cout << "size of employee : " << sizeof(Employee) << endl; 
	cout << "size of Adress : " << sizeof(Address) << endl;


	cout << endl;

} 