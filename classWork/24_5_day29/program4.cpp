#include <iostream>

using namespace std;

typedef struct _node
{
	int data;
	struct _node* next; 
}NODE;

void program4()
{
	NODE* newNode = NULL, * head = nullptr, * temp = NULL; 

	int choice = 1;
/*
	do
	{
		newNode = new NODE[1];		// create node
		cout << "Enter value of Node :";
		cin >> newNode->data;		// initialise values 
		newNode->next = NULL;				// initialise values 

		if (head == NULL)
		{
			head = newNode;
			temp = newNode;
		}
		else
		{
			temp->next = newNode;
			temp = newNode;
		}
		
		cout << "Do you want to add new node ( 0/1) : ";
		cin >> choice; 

	} while (choice);
	*/
	head = temp = new NODE[1]{ 0 , nullptr };
	do
	{
		newNode = new NODE[1];		// create node
		cout << "Enter value of Node :";
		cin >> newNode->data;		// initialise values 
		newNode->next = NULL;				// initialise values 

			temp->next = newNode;

		cout << "Do you want to add new node ( 0/1) : ";
		cin >> choice;

	} while (choice);

	temp = head; 
	head = head->next;
	delete temp; 


	temp = head;

	while (temp)
	{
		cout << '\t' << temp->data; 
		temp = temp->next; 
		if (temp)
			cout << "\t->";
		else
			cout << endl;
	}

}