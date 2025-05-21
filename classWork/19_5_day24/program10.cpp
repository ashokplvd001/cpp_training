#include <iostream>
#include <cstring>
using namespace std; 


int add(int v1, int v2);
int add(int v1, int v2, int v3);
char* add(char* v1, char* v2);

void program10()
{
	char s1[30] = "ashok";
	char s2[30] = "issokay";
	cout << "add1 = " << add(11, 12)<<endl;
	cout << "add2 = " << add(11, 22, 33) << endl;
	cout << "add3 = " << add(s1, s2) << endl;

}

int add(int v1, int v2)
{
	return v1 + v2;
}

int add(int v1, int v2 , int v3)
{
	return v1 + v2 + v3 ;
}

char * add(char *  v1,char*  v2)
{
	return strcat( v1 , v2 );
}
