#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Employee
{
	int e_id = 10 ;
	char e_name[20];
	char e_desg[20];
}EMP;

void program4()
{
	EMP * e = ( EMP * ) malloc( sizeof( EMP ) * 3 ) ;

	cout << "Employee 0 id : " << e[0].e_id << "\nname : " << e[0].e_name << "\ndesg : " << e[0].e_desg << endl;

	*( e + 1 ) = EMP{0, "srf"};

	cout << "Employee 1 id : " << (e+1)->e_id << "\nname : " << (e+1)->e_name << "\ndesg : " << (e+1)->e_desg << endl;
	e[2] = {4,};
	cout << "Employee 2 id : " << (*(e+2)).e_id << "\nname : " << (*(e+2)).e_name << "\ndesg : " << (*(e+2)).e_desg << endl;
	e[0] = {0,};
	cout << "Employee 0 id : " << (*e).e_id << "\nname : " << (*e).e_name << "\ndesg : " << (*e).e_desg << endl;
	cin >> (*e).e_id >> (*(e+0)).e_name >> (*(e+0)).e_desg;
	cout << "Employee id : " << (*(e+0)).e_id << "\nname : " << (*(e+0)).e_name << "\ndesg : " << e[0].e_desg << endl;


}