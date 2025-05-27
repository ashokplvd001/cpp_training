#include <iostream>

using namespace std; 


typedef struct _node
{
	int value;
	struct _node* next;
}NODE;


NODE* createNode();
NODE * addNodeBeg(NODE*, NODE*);
NODE * addNodeEnd(NODE*, NODE*);
void dispList(NODE*);
int dispMenu();


void program6()
{
	NODE* head, * temp, * newNode;
	head = temp = newNode = nullptr;

	int choice = 0;

	do
	{
		choice = dispMenu();

		switch (choice)
		{
		default:
			cout << "Invalid option!\n";
		case 0:
			break;
		case 1:
			if (temp = createNode())
				head = addNodeBeg(head, temp);
			break;
		case 2:
			if (temp = createNode())
				head = addNodeEnd(head, temp);
			
			break;
		case 3:
			dispList(head);
			break;

		}
	} while (choice);


}

/*

int dispMenu()
{
	int choice;
	cout << "Enter option\n\t1. Add Node Beggining\n\t2. Add NOde End\n\t3. Display List\n\t0. Exit\t";
	cin >> choice;
	return choice;
}


NODE* createNode()
{
	NODE* newNode = new NODE[1];

	if (newNode == NULL)
		return nullptr;

	cout << "Enter the value for the node : ";
	cin >> newNode->value;

	newNode->next = nullptr;
	return newNode;
}


void dispList1(NODE* head)
{
	if (head == NULL)
	{
		cout << "No elements\n";
		return;
	}

	while (head->next)
	{
		cout << head->value << "\t->\t";
		head = head->next;
	}

	cout << head->value << endl;
	head = head->next;
}


*/

NODE * addNodeBeg(NODE* head, NODE* temp)
{
	if (head != NULL)
		temp->next = head;

	return temp ;
}

NODE * addNodeEnd(NODE* head, NODE* temp)
{
	if (head == NULL)
		return temp;

	NODE* temp2 = head; 

	while (head->next)
		head = head->next;

	head->next = temp;
	return temp2 ;
}
