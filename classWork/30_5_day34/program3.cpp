#include  <iostream>
#include <fstream>

using namespace std; 

struct Employee
{
	int id;
	//string name; 
	char name[40]; 
};


int main()
{

	fstream file;
	struct Employee e = { 101 , "Amit" };
	file.open("test.txt", ios::in | ios::out | ios::binary ) ;

	if (!file.is_open())
	{
		cerr << "Error : opening the file " << endl;
		return 0; 
	}

	file.write((char*)&e, sizeof(e));
	file.write((char*)"\n", 1);
	file.write((char*)&e, sizeof(e));
	struct Employee e1;

	cout << file.tellg() << endl;
	cout << file.tellp() << endl;
	file.seekp(0, ios::beg);



	file.read((char*)&e1, sizeof(e));

	cout << file.tellg() << endl;
	cout << file.tellp() << endl;

//	file.seekg( 

	cout << e1.id << "\t" << e1.name << endl;

	file.close();




}