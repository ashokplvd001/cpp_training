#pragma once

#include <iostream>
using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d = 0) {
		data = d;
		next = nullptr;
		cout << "Constr of Node got called: data=" << data << endl;
	}
	int getData();
	int setData(int);
	Node* getNext();
	void setNext(Node*);

};


int Node::setData(int v) {
	data = v;
	return 0;
}

int Node::getData()
{
	return data;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nn)
{
	next = nn;
}



class LinkedList {
private:
	Node* head;
public:
	LinkedList() {

		head = nullptr;
	}
	//LinkedList(int) {}

	int addBeg(int);
	int addEnd(int);
	void addAfter(int, int);
	bool delNode(int);
	void display();
};



void LinkedList::addAfter(int target, int val)
{
	bool found = false;
	Node* temp = head;

	while (temp != nullptr)
	{
		if (temp->getData() == target)
		{
			found = true;
			break;
		}
		temp = temp->getNext();
	}

	if (found == true)
	{
		Node* nn = new Node;
		nn->setData(val);
		nn->setNext(temp->getNext());
		temp->setNext(nn);
	}
	else {
		cout << "Target " << target << " not found in the list" << endl;
		// if req. is to add new elem man. it could be added
		// at the end of the list if target not found
	}
}


int LinkedList::addEnd(int v) {

	//create new node
	Node* nn = new Node;
	nn->setData(v);

	if (head == nullptr)
	{
		//empty list and first node
		head = nn;
	}
	else
	{
		Node* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		//cout << "new node added with value: " << temp->getData() <<nn->getData() <<endl;
	}

	return 0;
}

void LinkedList::display()
{
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->getData() << "->";
		temp = temp->getNext();
	}
	cout << "NULL" << endl;
}


bool LinkedList::delNode(int target)
{
#if 0
	Node* temp = head;
	while (temp != nullptr) {
		if (temp->getNext()->getData() == target)
			break;
		temp = temp->getNext();
	}
	Node* fptr = temp;
	Node* sptr = temp->getNext();
	cout << "ftpr: " << fptr->getData() << "\tsptr: " << sptr->getData() << endl;
	fptr->setNext(sptr->getNext());
	delete sptr;

#else
	if (head == nullptr)
		return true; 
	else if (head->getData() == target)
	{
		Node* temp = head; 
		head = head->getNext();
		delete temp; 
		return true; 
	}

	Node* temp = head->getNext() ;
	Node* fptr = head; 

	while (temp != nullptr) {
		if (temp->getData() == target)
			break;
		fptr = temp;
		temp = temp->getNext();
	}

	if (temp == nullptr)
		return true; 

	fptr->setNext(temp->getNext());

	delete temp;

#endif


	return true;
}


int main()
{
	//LinkedList l1(10);
	LinkedList l2;
	l2.addEnd(10);
	l2.addEnd(11);
	l2.addEnd(12);

	l2.display();
	int target = 11;
	int val = 50;
	l2.addAfter(target, val);
	l2.display();

	l2.delNode(53240);
	l2.display();

	cout << "okok\n";
	return 0;
}