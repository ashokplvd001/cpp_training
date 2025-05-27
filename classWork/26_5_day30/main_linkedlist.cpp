#include <iostream>
#include "MyLinkedList.h"

using namespace std;

int main()
{
	MyLinkedList ll1;

	int opt = 0, existedValue = 0, newValue = 0;

	auto readNewValue = [] {  int temp; cout << "Enter the new Value : "; cin >> temp; return temp; };
	auto readexistedValue = [] {  int temp; cout << "Enter the existed Value : "; cin >> temp; return temp; };


	auto Menu = []
		{
			cout << "Press\n\t2. Add at begin\n\t3. Add  at end\n\t4. Add After\n\t5. Add before\n";
			cout << "\t6.Delete at begin\n\t7. Delete at end\n\t8. Delete the data\n";
			cout << "\t9. search Data\n\t10. Search Data and print\n\t11. update data\n";
			cout<<"\t12.Display List\n\t13. Delete list\n\t0.Exit\n";
		};


	cout << "Press 1 for menu\n";
	do {

		cin >> opt;

		switch (opt)
		{
		default:
			cout << "Invalid Input\n";
			break;
		case 0:
			break;
		case 1:
			Menu();
			break;
		case 2:
			newValue = readNewValue();
			if (!ll1.addAtBegin(newValue))
				cout << "Failed to add\n";
			break;
		case 3:
			newValue = readNewValue();
			if (!ll1.addAtEnd(newValue))
				cout << "Failed to add\n";
			break;
		case 4:
			newValue = readNewValue();
			existedValue = readexistedValue();
			if (!ll1.addAfter(existedValue, newValue))
				cout << "Failed to add\n";
			break;
		case 5:
			newValue = readNewValue();
			existedValue = readexistedValue();
			if (!ll1.addBefore(existedValue, newValue))
				cout << "Failed to add\n";
			break;
		case 6:
			if (!ll1.deleteAtBegin())
				cout << "Failed to delete\n";
			break;
		case 7:
			if (!ll1.deleteAtEnd())
				cout << "Failed to delete\n";
			break;
		case 8:
			existedValue = readexistedValue();
			if (!ll1.deleteTheData(existedValue))
				cout << "Failed to delete\n";
			break;
		case 9:
			existedValue = readexistedValue();
			if (!ll1.searchData(existedValue))
				cout << "Not found\n";
			else
				cout << "Data Found\n";
			break;
		case 10:
			existedValue = readexistedValue();
			if (!ll1.searchData(existedValue, 'D'))
				cout << "Not found\n";
			break;
		case 11:
			existedValue = readexistedValue();
			newValue = readNewValue();
			if (!ll1.updateValue(existedValue, newValue))
				cout << "Failed to update or Data not found\n";
			break;
		case 12:
			ll1.displayList();
			break;
		case 13:
			ll1.deleteList();
			break;
		}

	} while (opt);

	ll1.deleteList();
	cout << "Closed\n";

}
/*
void menu()
{
	cout << "Press\n\t2. Add at begin\n\t3. Add  at end\n\t4. Add After\n\t5. Add before\n";
	cout << "\t6.Delete at begin\n\t7. Delete at end\n\t8. Delete the data\n";
	cout << "\t9. search Data\n\t10. Search Data and print 11. update data\n\t12. Delete list\n\t0.Exit\n";
}
*/