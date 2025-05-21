#include <iostream>

using namespace std; 

typedef struct _shape
{
	int length;
	int width;
}SHAPE; 


void program1()
{

	SHAPE s1 = { 10 , 20 };

	cout << "s1 = " << s1.length << '\t' << s1.width << endl;

	SHAPE s2 = s1; 

	cout << "s2 = " << s2.length << '\t' << s2.width << endl;
	 
	SHAPE s3 = { 0 , };

	cout << "s3 = " << s3.length << '\t' << s3.width << endl;

	s3.length = 100; 
	s3.width = 200; 
	
	cout << "s3 = " << s3.length << '\t' << s3.width << endl;

	s2 = s3;

	cout << "s2 = " << s2.length << '\t' << s2.width << endl;


}