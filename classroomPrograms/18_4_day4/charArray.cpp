#include <iostream>

using namespace std;

void charArray()
{

char name[] = "ashok";
cout << "name : " << name << endl;

cout << "size of name : " << sizeof(name) << endl;
cout << "lenght of name : " << strlen(name) << endl;

for (int i = 0; i < sizeof(name);i++)
{
	printf("%c = %d\n", name[i], name[i]);
	cout << name[i] << " = " << (int)name[i] << endl;
}


char name1[6] = "ashok";
cout << "name1 : " << name1 << endl;

cout << "size of name1 : " << sizeof(name1) << endl;
cout << "lenght of name1 : " << strlen(name1) << endl;

for (int i = 0; i < sizeof(name1);i++)
{
	printf("%c = %d\n", name[i], name1[i]);
	cout << name1[i] << " = " << (int)name1[i] << endl;
}




char name2[5] = { 'A' , 'B' , 'C' , 'D' , 'E' };

// may leads to currupt the stack, bcz no null at end , it will go untill it found null 
   //	cout<<"name2 : "<<name2<<endl ;
}