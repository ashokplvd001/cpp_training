#include <iostream>

using namespace std;

typedef struct _node
{
	int value; 
	struct _node* next; 
}NODE;

NODE* createNode();
bool addNodeBeg( NODE * , NODE * );
bool addNodeEnd(NODE *, NODE *);
void dispList (NODE*);
int dispMenu();


void program5()
{
	NODE* head, * temp, * newNode; 
	head = temp = newNode = nullptr; 

	int choice = 0; 

	do
	{
		choice = dispMenu();

		switch ( choice ) 
		{
		default : 
			cout << "Invalid option!\n";
		case 0 :
			break;
		case 1 :
			if (temp = createNode())
				if (addNodeBeg(head, temp))
			head = temp; 
			break;
		case 2 :
			if (temp = createNode())
				if (addNodeEnd(head, temp))
				{
					if (head == NULL)
					{
						head = temp; 
					}
				}
			break;
		case 3 :
			dispList( head );
			break;

		}
	} while (choice);

	
}

int dispMenu()
{
	int choice; 
	cout << "Enter option\n\t1. Add Node Beggining\n\t2. Add NOde End\n\t3. Display List\n\t0. Exit\t";
	cin >> choice; 
	return choice; 
}


NODE* createNode()
{
	NODE * newNode =  new NODE[1];
	
	if (newNode == NULL)
		return nullptr ; 

	cout << "Enter the value for the node : ";
	cin >> newNode->value;

	newNode->next = nullptr; 
	return newNode ; 
}


bool addNodeBeg(NODE* head, NODE* temp)
{
	if( head != NULL )
	temp->next = head; 

	return true; 
}

bool addNodeEnd(NODE* head, NODE* temp)
{
	if (head == NULL)
		return true ;
	
	while (head->next)
		head = head->next; 

	head->next = temp; 
	return true;
}

void dispList(NODE * head)
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