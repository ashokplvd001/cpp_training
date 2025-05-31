#include <iostream>
#include <exception>
using namespace std;

int main()
{
	string e_rror = "error";

	//char* ptr = nullptr;

	int n1 = 4353, n2 = 0;
	char ptr[7] = "hello";

	try
	{
		//	throw 20;
		//	throw e_rror;
		/*
		if (ptr == nullptr)
			throw e_rror;
		*/
		/*
			int* arr = ( int *)malloc(9999999999999);
			if( arr = nullptr  )
				throw
	*/
		ptr[15] = 'c';

	}
	catch (int e)
	{
		cout << "Caught an exception : " << e << endl;
	}
	catch (string e)
	{
		cout << "Caught an exception : " << e << endl;
		return 0;
	}
	catch (exception& e)
	{
		cout << "Error :  " << e.what() << endl;
	}
}