#pragma once

class Node
{
	int n_data;
	Node* n_next;
public:
	Node(int data , Node* next  );
	int get_n_data() const;
	Node* get_n_next() const;
	void set_n_data(int data);
	void set_n_next(Node* ptr);
};



class MyLinkedList
{
	Node* head;
	inline Node* createNode(int data, Node* ptr);
	inline void displayData(Node*) const;
public:
	//inline MyLinkedList();
	MyLinkedList() :
		head(nullptr) {}

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
