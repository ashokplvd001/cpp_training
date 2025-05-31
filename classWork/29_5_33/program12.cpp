#include <iostream>

using namespace std; 

int main()
{
	string e_rror = "error";
	
	char* ptr = nullptr ; 

	try
	{
	//	throw 20;
	//	throw e_rror;
		if (ptr == nullptr)
			throw e_rror;
	}
	/*catch (int e)
	{
		cout << "Caught an exception : " << e << endl;
	}*/
	catch (string e)
	{
		cout << "Caught an exception : " << e << endl;
		return 0; 
	}



}