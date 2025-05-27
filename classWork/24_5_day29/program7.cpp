#include <iostream>
using namespace std; 

typedef struct _node
{
	int value;
	struct _node* next;
}NODE;


class myLinkedList
{
	NODE * head; 
	NODE* createNode( int );
	public : 
		myLinkedList();
		void  dispList();
		bool addNodeBeg( int );
		bool addNodeEnd(int  );

};

myLinkedList::myLinkedList()
{
	head = nullptr; 
}



NODE* myLinkedList:: createNode( int val )
{
	NODE* newNode = new NODE[1];

	if (newNode == NULL)
		return nullptr;

	
	newNode->value = val;

	newNode->next = nullptr;
	return newNode;
}


void myLinkedList:: dispList()
{
	if (head == NULL)
	{
		cout << "No elements\n";
		return;
	}

	NODE * temp = head; 
	while (temp->next)
	{
		cout << '\t'<< temp->value << "\t->";
		temp = temp->next;
	}

	cout << '\t' << temp->value << endl;
	temp = temp->next;
}



bool myLinkedList:: addNodeBeg( int val )
{
	NODE* temp = createNode( val );
	if (temp == NULL)
	{
		cout << "Failed to create memory\n";
		return false ;
	}
	

	if (head != NULL)
		temp->next = head;
	
		head = temp;

		return true;
}

bool myLinkedList:: addNodeEnd(  int val )
{
	NODE* temp = createNode( val );
	if (temp == NULL)
	{
		cout << "Failed to create memory\n";
		return false ;
	}

	if (head == NULL)
		head = temp;

	NODE* temp2 = head; 

	while (temp2->next)
		temp2 = temp2->next;

	temp2->next = temp;

	return true ;
}

void program7()
{
	cout << "program begin\n";
		
	myLinkedList ll1;
	
	int opt = 0, val = 0; 
	cout << "Enter \n1. AddBeg\n2. AddEnd\n3. Display\n";

	do
	{
		cin >> opt; 

		switch (opt)
		{
		default :
			cout << "Invalid input\n";
			break;
		case 1 :
			cout << "Enter the value : ";
			cin >> val; 
			ll1.addNodeBeg(val);
			break;
		case 2:
			cout << "Enter the value : ";
			cin >> val;
			ll1.addNodeEnd(val);
			break;
		case 3 :
			ll1.dispList();
			break;
		case 0 :
			break;
		}

	} while (opt);
}