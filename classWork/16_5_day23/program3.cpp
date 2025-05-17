#include <iostream>

using namespace std; 

#define SIZE 4

void program3()
{
	int* fix = (int*)malloc(sizeof(int) * 1024  );

	int* ptr = fix;
	if (ptr == NULL)
		cout << "its null ";

	for (int i = 0; i < SIZE; i++)
	{
		cin >> (*ptr); 
		ptr++;
	}
	cout << "+++======================+++\n";
	ptr = fix;

	for (int i = 0; i < SIZE; i++)
	{
		cout << *ptr++ << endl; 
		
	}
	cout << endl;
	cout << fix << endl;
	cout << *fix << endl;
	/*
	free( fix );		// we have to free ,if not it leads to memory leak 
	cout << fix << endl;
	*/
	//fix = nullptr;
	//free(fix);
	cout << *fix << endl;	// if we try to dereference 



		// valgrind is used to check memory leak  
}