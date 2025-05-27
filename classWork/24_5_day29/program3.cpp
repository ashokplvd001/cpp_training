#include <iostream>

using namespace std; 

struct node
{
	int v; 
	struct node* ptr; 
};

void program3()
{
	//step1 : (create mem) allocationg  mem for different nodes 
	struct node n1, n2 , n3  ;

	cout << sizeof(n1) << "\tAddress of n1 : " << (unsigned long int) & n1 << endl;
	cout << sizeof(n2) << "\tAddress of n2 : " << (unsigned long int) & n2 << endl;
	cout << sizeof(n3) << "\tAddress of n3 : " << (unsigned long int) & n3 << endl;
	cout << "--------------------\n";
	//step2 : initialize value to all nodes 
	n1.v = 10; 
	n1.ptr = NULL;

	n2.v = 20; 
	n2.ptr = NULL;

	n3.v = 30;
	n3.ptr = NULL;

	cout << "n1.value : " << n1.v << "\tptr : " << (unsigned long int)n1.ptr << endl;
	cout << "n2.value : " << n2.v << "\tptr : " << (unsigned long int)n2.ptr << endl;
	cout << "n3.value : " << n3.v << "\tptr : " << (unsigned long int) n3.ptr << endl;
	cout << "--------------------\n";

//	step3 : make relationship 

	n1.ptr = &n2;
	n2.ptr = &n3;

	cout << "After relationship\n";
	
	cout << "n1.value : " << n1.v << "\tptr : " << (unsigned long int)n1.ptr << endl;
	cout << "n2.value : " << n2.v << "\tptr : " << (unsigned long int)n2.ptr << endl;
	cout << "n3.value : " << n3.v << "\tptr : " << (unsigned long int) n3.ptr << endl;
	cout << "--------------------\n";
	//step4 : traversing in the list 
	struct node* head = &n1;	// n1 => BA of the list 

	cout << n1.v << endl; 
	cout << "--------------------\n";
	cout << head->v << endl;
	cout << head->ptr->v << endl;
	cout << head->ptr->ptr->v << endl;

	cout << "--------------------\n";

	struct node* temp = &n1;
	cout << temp->v << endl;

	temp = temp->ptr;
	cout << temp->v << endl;

	temp = temp->ptr;
	cout << temp->v << endl;
	
	cout << "--------------------\n";
	cout << "in loop\n\t";
	temp = head =  &n1;

	while (temp->ptr  )
	{
		cout << temp->v <<"\t->\t";
		temp = temp->ptr;
	}
	cout << temp->v << endl;
	temp = temp->ptr;

	cout << "--------------------\n\t";

	struct node n4;
	n4.v = 40; 
	n4.ptr = nullptr;

	n1.ptr = &n4;
	n4.ptr = &n2;

	temp = head = &n1;

	while (temp->ptr)
	{
		cout << temp->v << "\t->\t";
		temp = temp->ptr;
	}
	cout << temp->v << endl;
	temp = temp->ptr;

	cout << "--------------------\n\t";

	struct node n5, n6;

	n5.v = 50; 
	n6.v = 60;
	n5.ptr = n6.ptr = nullptr; 
	
	n5.ptr = &n1;
	n3.ptr = &n6;

	temp = &n5; 

	while (temp->ptr)
	{
		cout << temp->v << "\t->\t";
		temp = temp->ptr;
	}
	cout << temp->v << endl;
	temp = temp->ptr;

	cout << "--------------------\n";

	n4.ptr = &n3;

	temp = &n5;

	while (temp->ptr)
	{
		cout << '\t' << temp->v <<"\t->";
		temp = temp->ptr;
	}
	cout << '\t'<<temp->v << endl;
	temp = temp->ptr;

	cout << "--------------------\n";



}