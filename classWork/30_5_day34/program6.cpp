#include <iostream>
#include <fstream>

using namespace std; 

struct Employee
{
	int id; 
	string name; 
};

int main()
{
	fstream file;
	file.open("test.txt", ios::in | ios::out | ios::binary);


	Employee e1 = { 101, "32453245" };
	Employee e2 = { 102 , "efgssdf" };


	file.write((char*)&e1.id, sizeof(e1.id));
	file.write(e1.name.c_str(), e1.name.size());
	file.write("\n", 1);


	file.seekg(ios::beg);

	file.read((char*)&e2.id, sizeof(e1.id));

	char ch; 
	file.get(ch);	
	
	e2.name = "";

	while ( (ch != '\n') && (ch != '\0') &&( ch != EOF ))
	{

		e2.name += ch;
		file.get(ch);
	}

	cout << "e2 id = " << e2.id << endl;
	cout << "e2.name = " << e2.name << endl;


}
