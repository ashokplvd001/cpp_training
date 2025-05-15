#include <iostream>
using namespace std; 
void program1()
{




	struct book b1; 
	cout << sizeof(b1) << endl;

	struct book b2 = { 1001 , 200 , 50 , "Let Us C++" , "Yeshwant" };

	cout << b2.isbin << endl;
	struct book* b3; 
	cout << sizeof(b3) << endl;
	//cout << b3.isbin << endl;
	b3 = (struct book*)malloc(sizeof(struct book));






}