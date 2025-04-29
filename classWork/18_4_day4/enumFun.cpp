#include <iostream>
using namespace std ; 

void enumFun()
{
enum Day{Sunday , Monday , Tuesday = 1002, Wednessday , Thursday };
Day today = Tuesday; 
cout << "value of today is : " << today << endl;
cout << "value of sunday is : " << Sunday << endl;
cout << "value of monday is : " << Monday << endl;
cout << "value of tuesday is : " << Tuesday << endl;
cout << "value of wednessday is : " << Wednessday << endl;

}