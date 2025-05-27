#pragma once

class Node
{
	int n_data;
	Node* n_next;
public:
	Node(int data, Node* next);
	int get_n_data() const;
	Node* get_n_next() const;
	void set_n_data(int data);
	void set_n_next(Node* ptr);
};
