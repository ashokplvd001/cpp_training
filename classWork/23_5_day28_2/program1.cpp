#include <iostream>
using namespace std; 

#define MAX 5 

static int top = -1; 
static int bottom = -1;
static int arr[MAX]; 


static int push(int val);
static int pop();
static void display();

void program1()
{
	push(10);
	display();
	pop();
}

int push(int val)
{
	if (top == MAX - 1)
	{
		cout << "stack is full\n";
		return -1; 
	}
	arr[++top] = val;
}

int pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty";
		return -1;
	}

	cout << "pop element is : " << arr[top] << endl;
	top--;
}

void display()
{
	if (top == bottom)
	{
		cout << "stack have no elements to print\n";
		return; 
	}

	for (int i = top; i > bottom; i--)
		cout << arr[i] << endl;

}


