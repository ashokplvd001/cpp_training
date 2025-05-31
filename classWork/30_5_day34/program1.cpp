#include <iostream>
#include <fstream>


using namespace  std; 

int main()
{
	ofstream fOut("table.txt");

	if (!fOut.is_open())
		cerr << "Failed to open\n";

	for (int i = 2; i <= 5; i++)
	{
		fOut << "----------- Table " << i << " ----------\n";
		for (int j = 1; j <= 10; j++)
		{
			fOut << i << " x " << j << " = " << i * j << endl;
		}
	}

	cout << "successfully completed\n";
}