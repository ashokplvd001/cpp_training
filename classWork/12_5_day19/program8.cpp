#include <iostream>

using namespace std; 

void program8()
{
	int* ptr = nullptr;
	int* temp = nullptr; 
	int noOfElem = 5; 

	temp = ptr = (int*)malloc(sizeof(int) * noOfElem);

	
	for (int i = 0; i < noOfElem; i++ )
	{
		cout << "Enter the " << i << " value : ";
		cin >> *ptr++; 
	}
	cout << "--------------\n";
	ptr = temp; 

	for (int i = 0; i < noOfElem; i++ ) 
		cout << (i + 1) << " value = " << *ptr++ << endl;

	cout << "--------------\n";
	ptr = temp;

	for (int i = 0; i < noOfElem; i++)
		cout << (i + 1) << " value = " << ptr[i] << endl;
	
	cout << "--------------\n";


}