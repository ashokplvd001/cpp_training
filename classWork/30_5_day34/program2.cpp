#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

int main()
{
	fstream fIn("table.txt");
	
	if (!fIn.is_open())
		cerr << "Failed to open file\n";
	else
		cout << "opended successfully\n";

	string line; 


	while (getline(fIn, line))
	{
		cout << line<<endl;
	}


	cout << "completed task\n";
	fIn.close();
}