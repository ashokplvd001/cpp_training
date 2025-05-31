#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// implement try catch block 

class Employee
{
	int e_id;
	char  e_name[50];
public:
	Employee(int id = 0, char* name = nullptr) : e_id(id)
	{
		if (name == nullptr) e_name[0] = '\0';
		else strcpy(e_name, name);
	}
	bool update_e_Name(char* name)
	{
		strcpy(e_name, name);
		return true;
	}
	void displayEmp()
	{
		cout << "id = " << e_id << endl;
		cout << "name = " << e_name << endl;
	}
	int get_e_Id()
	{
		return e_id;
	}
	string  get_e_name()
	{
		return e_name;
	}
	~Employee()
	{

	}
};


bool addEmployee(vector <Employee>& emp);
bool updateName(vector <Employee>& emp);
bool searchEmp(vector <Employee>& emp);
bool deleteEmp(vector <Employee>& emp);
bool deleteList(vector <Employee>& emp);
void displayList(vector <Employee>& emp);
bool updateDatabase(vector <Employee>& emp);
bool extractFromFile(vector < Employee>& emp);


int main()
{
	vector <Employee> emp;
	extractFromFile(emp);


	//auto function_name = [capture](parameters) -> return_type { body } ;
	auto Menu = []() ->void
		{
			cout << "Menu\n\t1. add\n\t2. update name\n\t3. search\n\t4. delete\n\t5. delete list\n"
			<< "\t6. display list\n\t7. update database\n\t0.Exit\n";
		};

	int opt;


	Menu();
	cout << "Press 11. Menu\n";
	do
	{
		if (!(cin >> opt))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		switch (opt)
		{
		default:
			cout << "Invalid option\n";
			break;
		case 0:
			break;
		case 11:
			Menu();
			break;
		case 1:
			if (!addEmployee(emp))
				cout << "Failed to add\n";
			break;
		case 2:
			if (!updateName(emp))
				cout << "employee not existed\n";
			break;
		case 3:
			if (!searchEmp(emp))
				cout << "employee not existed\n";
			break;
		case 4:
			if (!deleteEmp(emp))
				cout << "Employee not existed\n";
			break;
		case 5:
			if (!deleteList(emp))
				cout << "Employee list is empty\n";
			break;
		case 6 :
			displayList(emp);
			break;
		case 7:
			updateDatabase(emp);
			break;

		}
	} while (opt);

	// update list 
	updateDatabase(emp);

}


bool addEmployee(vector <Employee>& emp)
{

	int id;
	char name[50];

	cout << "Enter the id : ";
	cin >> id;
	cout << "Enter the name : ";
	cin >> name;

	Employee e(id, name);

	emp.push_back(move(e));
	cout << "Successfully added an employee\n";
	return true;
}

bool updateName(vector <Employee>& emp)
{
	int id;
	char name[50];

	cout << "Enter the id : ";
	cin >> id;
	cout << "Enter the name : ";
	cin >> name;

	for (auto& e : emp)
	{
		if (e.get_e_Id() == id)
		{
			e.update_e_Name(name);
			cout << "Name Updated successfully\n";
			return true;
		}
	}
	return false;
}

bool searchEmp(vector <Employee>& emp)
{
	int id = 0;
	cout << "Enter the id : "; cin >> id;

	for (auto& e : emp)
	{
		if (e.get_e_Id() == id)
		{
			e.displayEmp();
			return true;
		}
	}
	return false;
}

bool deleteEmp(vector <Employee>& emp)
{
	int id = 0;
	cout << "Enter the id : "; cin >> id;

	int i = 0;
	for (auto& e : emp)
	{

		if (e.get_e_Id() == id)
		{
			emp.erase(emp.begin() + i);
			cout << "deleted employee successfully\n";
			return true;
		}
		i++;
	}
	return false;
}

bool deleteList(vector <Employee>& emp)
{
	emp.clear();
	return true;
}

void displayList(vector <Employee>& emp)
{
	if (!emp.size())
	{
		cout << "List is empty\n";
		return;
	}
	int i = 0;

	for (auto it = emp.begin(); it != emp.end(); it++)
	{
		cout << ++i << "--\n";
		it->displayEmp();
	}
}

bool updateDatabase(vector <Employee>& emp)
{
	fstream file;
	file.open("file.txt" , ios::out | ios :: trunc );

	if (!file.is_open())
	{
		cerr << "Failed to open file\n";
		return false;
	}

	

	for (auto& e : emp)
	{
	//	e.displayEmp();
		file.write((char*)&e, sizeof(Employee));
		//	file.write("\n", 1);
	}

	file.close();
	return true;
}

bool extractFromFile(vector < Employee>& emp)
{
	fstream file;
	file.open("file.txt", ios::in);

	if (!file.is_open())
	{
		cerr << "Failed to open file\n";
		return false;
	}

//	int id; string name;

	Employee e;

	while (!file.eof())
	{
		if( ! file.read((char*)&e, sizeof(Employee)) )
			break;

		emp.push_back(e);
		/*
		char ch;
		file.read(&ch, 1);
		*/
	}

	file.close();
	return true;
}



