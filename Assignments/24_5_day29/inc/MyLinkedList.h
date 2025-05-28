#pragma once

#include "Node.h"

class MyLinkedList
{
	Node* head;
	inline Node* createNode(int data, Node* ptr);
	inline void displayData(Node*) const;
public:
	//inline MyLinkedList();
	inline MyLinkedList() { head = nullptr; };

	bool addAtBegin(int data);
	bool addAtEnd(int data);
	bool addAfter(int existed, int newData);
	bool addBefore(int existed, int newData);

	bool searchData(int data, char opt = 0) const;

	void displayList() const;

	bool deleteAtBegin();
	bool deleteAtEnd();
	bool deleteTheData(int val);

	void deleteList();

	bool updateValue(int existed, int newData);

};
