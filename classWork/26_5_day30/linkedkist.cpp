#include <iostream>
#include "MyLinkedList.h"

using namespace std; 

Node::Node(int data  , Node* next ) :
	n_data(data), n_next(next) {}

int Node::get_n_data() const {
	return n_data;
}

Node* Node::get_n_next() const {
	return n_next;
}

void Node::set_n_data(int data) {
	this->n_data = data;
}

void Node::set_n_next(Node* ptr) {
	this->n_next = ptr;
}


//////////////


/*
inline MyLinkedList::MyLinkedList() :
	head(nullptr) {}
	*/

inline Node* MyLinkedList::createNode(int data = 0, Node* ptr = nullptr) {
	return new Node{ data, ptr };
}

inline void MyLinkedList::displayData(Node* temp) const
{
	cout << "Data - " << temp->get_n_data() << endl;
	return;
}

void MyLinkedList::displayList() const
{
	Node* temp = head; 
	while (temp)
	{
		displayData(temp);
		temp = temp->get_n_next();
	}
}


bool MyLinkedList::addAtBegin(int val)
{
	Node* newNode = createNode(val);

	if (newNode == nullptr) {
		//	cout << "Failed to create memory\n" ;
		return false;
	}

	newNode->set_n_next(head);
	head = newNode;

	return true;
}

bool MyLinkedList::addAtEnd(int val)
{
	Node* newNode = createNode(val);

	if (newNode == nullptr) {
		//	cout << "Failed to create memory\n" ;
		return false;
	}

	if (head == nullptr)
	{
		head = newNode;
		return true;
	}
	

	Node* temp = head;

	while (temp->get_n_next() )
		temp = temp->get_n_next();

	temp->set_n_next(newNode);

	return true;
}

bool MyLinkedList::addAfter(int existed, int newData)
{

	Node* temp = head;
	while (temp)
	{
		if (temp->get_n_data() == existed)
			break;
		temp = temp->get_n_next();
	}

	if (temp == nullptr)
		return false;

	Node* newNode = createNode(newData, temp->get_n_next());

	if (newNode == nullptr)
		return false;

	temp->set_n_next(newNode);
	return true;
}

bool MyLinkedList::addBefore(int existed, int newData)
{
	Node* temp1 = nullptr;
	Node* temp2 = head;

	while (temp2)
	{
		if (temp2->get_n_data() == existed)
			break;
		temp1 = temp2;
		temp2 = temp2->get_n_next();
	}

	if (temp2 == nullptr)
		return false;

	Node* newNode = createNode(newData, temp2);

	if (newNode == nullptr)
		return false;

	if (temp1 == nullptr)
		head = newNode;
	else
		temp1->set_n_next(newNode);

	return true;

}

bool MyLinkedList::searchData(int val, char opt) const
{
	Node* temp = head;

	while (temp)
	{
		if (temp->get_n_data() == val)
			break;
		temp = temp->get_n_next();
	}


	if (temp == nullptr)
		return false;

	if (opt == 'D')
		displayData(temp);

	return true;

}

bool MyLinkedList::deleteAtBegin()
{
	if (head == nullptr)
		return false;

	Node* temp = head;
	head = head->get_n_next();

	delete temp ;

	return true;
}

bool MyLinkedList::deleteAtEnd()
{
	if (head == nullptr)
		return false;

	Node* temp1 = head;
	Node* temp2 = temp1->get_n_next();

	if (temp2 == nullptr)
	{
		head = nullptr;
		delete temp1;
		return true;
	}

	while (temp2->get_n_next())
	{
		temp1 = temp2;
		temp2 = temp2->get_n_next();
	}

	delete temp2;
	temp1->set_n_next(nullptr);

	return true;
}

bool MyLinkedList::deleteTheData(int val)
{
	Node* temp1 = nullptr;
	Node* temp2 = head;

	while (temp2)
	{
		if (temp2->get_n_data() == val)
			break;
		temp1 = temp2;
		temp2 = temp2->get_n_next();
	}

	if (temp2 == nullptr)
		return false;

	if (temp1 == nullptr)
	{
		temp1 = head;
		head = head->get_n_next();
		delete temp1;
	}
	else
	{
		temp1->set_n_next(temp2->get_n_next());
		delete temp2;
	}
	return true;

}

void MyLinkedList::deleteList()
{
	if (head == nullptr)
		return;

	Node* temp1 = head;
	Node* temp2 = head->get_n_next();

	while (temp2)
	{
		delete temp1;
		temp1 = temp2;
		temp2 = temp2->get_n_next();
	}

	delete temp1;

	return;
}

bool MyLinkedList::updateValue(int existed, int newData)
{

	if (head == nullptr)
		return false;

	Node* temp = head;

	while (temp)
	{
		if (temp->get_n_data() == existed)
			break;
		temp = temp->get_n_next();
	}

	if (temp == nullptr)
		return false;

	temp->set_n_data(newData);

	return true;
}