#include <iostream>
using namespace std;

class Node 
{
	int data ;
	Node* next;
public : 
	Node(int v = 0, Node* ptr = nullptr)
	{
		data = v; next = nullptr;
	}
	bool setNext(Node* ptr)
	{
		next = ptr;
		return true; 
	}
	int getData() const {
		return data; }

	Node* getPtr() const  {
		return next ; }
};


class LinkedList
{
	Node* head;
	Node * createNode(int);
public:
	LinkedList();
	void  dispList();
	bool addNodeBeg(int);
	bool addNodeEnd(int);

};

LinkedList::LinkedList()
{
	head = nullptr;
}



Node* LinkedList::createNode(int val)
{
	Node* newNode = new Node{ val , nullptr };

	if (newNode == NULL)
		return nullptr;

	return newNode;
}


void LinkedList::dispList()
{
	if (head == NULL)
	{
		cout << "No elements\n";
		return;
	}

	Node* temp = head;
	while (temp->getPtr())
	{
		cout << '\t' << temp->getData() << "\t->";
		temp = temp->getPtr();
	}

	cout << '\t' << temp->getData() << endl;
	temp = temp->getPtr() ;
}



bool LinkedList::addNodeBeg(int val)
{
	Node* temp = createNode(val);
	if (temp == NULL)
	{
		cout << "Failed to create memory\n";
		return false;
	}


	if (head != NULL)
		temp->setNext( head )  ;

	head = temp;

	return true;
}

bool LinkedList::addNodeEnd(int val)
{
	Node* temp = createNode(val);
	if (temp == NULL)
	{
		cout << "Failed to create memory\n";
		return false;
	}

	if (head == NULL)
		head = temp;

	Node* temp2 = head;

	while (temp2->getPtr())
		temp2 = temp2->getPtr() ;

	temp2->setNext( temp ) ;

	return true;
}

void program8()
{
	cout << "program begin\n";

	LinkedList ll1;

	int opt = 0, val = 0;
	cout << "Enter \n1. AddBeg\n2. AddEnd\n3. Display\n";

	do
	{
		cin >> opt;

		switch (opt)
		{
		default:
			cout << "Invalid input\n";
			break;
		case 1:
			cout << "Enter the value : ";
			cin >> val;
			ll1.addNodeBeg(val);
			break;
		case 2:
			cout << "Enter the value : ";
			cin >> val;
			ll1.addNodeEnd(val);
			break;
		case 3:
			ll1.dispList();
			break;
		case 0:
			break;
		}

	} while (opt);
}