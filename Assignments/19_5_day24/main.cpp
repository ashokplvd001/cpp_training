#include <iostream>
#include <string>
using namespace std;


int add(int v1, int v2);
int add(int v1, int v2, int v3);
char* add(char* v1, char* v2);

int main()
{
	char s1[30] = "ashok";
	char s2[30] = "issokay";
	cout << "add1 = " << add(11, 12) << endl;
	cout << "add2 = " << add(11, 22, 33) << endl;
	cout << "add3 = " << add(s1, s2) << endl;

}

int add(int v1, int v2)
{
	return v1 + v2;
}
/*
	not allowed, bcz if the user give teo parameters it will ambitous , 
	bcz the below prototye is ok with onw  parameter  , two parameters , three parameters .
	and above prototype is also expecting two arguments this approach is not allowed in overloading , its error  
int add(int v1, int v2 = 0, int v3 = 0 )	 
*/

/*
	 if we give default value in parameters then all its right side parameters mustbe deafaut value type  
	int add(int v1, int v2 = 0, int v3)	
*/
int add(int v1, int v2 , int v3)
{
	return v1 + v2 + v3;
}

char* add(char* v1, char* v2)
{
	return strcat(v1, v2);
}
