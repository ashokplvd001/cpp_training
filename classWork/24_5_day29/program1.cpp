#include <iostream>

using namespace std; 

#define MAX 3

int* arr = nullptr; 
 
int front = 0; 
int rear = 0 ; 

bool enqueue( int val )
{
	if (rear == MAX )
	{
		//if (front != 0)
		{

		}
	//	else
		{
			cout << "stack is full\n";
			return false;
		}
	}

	arr[rear++] = val; 

}

bool dequeue()
{
	if (front == rear)
	{
		cout << "stack is empty\n";
		return false; 
	}
	cout << arr[front++] << endl;
}

void display()
{
	if (front == rear)
	{
		cout << "stack is empty\n";
		return;
	}

	for (int i = front ; i < rear ; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}



void program1()
{
	arr = new int[MAX];

	display();
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	display();
	dequeue();

	display();
	dequeue();
	display();

	dequeue();
	display();
	dequeue();
	display();





}