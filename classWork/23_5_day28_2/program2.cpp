#include <iostream>
using namespace std;


class myStack
{
	 int s_top ;
	 int s_bottom ;
	 int s_capacity;
	 int * s_arr;
public :
	myStack(int size);
	 int push(int val);
	 int pop();
	 void display() const;
};

myStack::myStack(int size)
{
	s_arr = new int[size];
	s_capacity = size;
	s_top = -1;
	s_bottom = -1;
}


int myStack::push(int val)
{
	if ( s_top == s_capacity - 1)
	{
		cout << "stack is full\n";
		return -1;
	}
	s_arr[++s_top] = val;
	return 0; 
}

int myStack::pop()
{
	if ( s_top == s_bottom)
	{
		cout << "Stack is empty";
		return -1;
	}

	cout << "pop element is : " << s_arr[s_top] << endl;
	s_top--;
	return 0; 
}

void myStack::display () const
{
	if ( s_top == s_bottom)
	{
		cout << "stack have no elements to print\n";
		return;
	}

	for (int i = s_top; i > s_bottom; i--)
		cout << s_arr[i] << endl;

}



void program2()
{
	int size = 0; 
	cout << "Enter size of array : ";
	cin >> size;

	myStack s1( size );

	s1.display();
	s1.push(10);
	s1.display();
	s1.pop();
	s1.display();
}