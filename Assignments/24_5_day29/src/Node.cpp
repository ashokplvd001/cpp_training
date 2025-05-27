#include "Node.h"


using namespace std;

Node::Node(int data, Node* next) :
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

