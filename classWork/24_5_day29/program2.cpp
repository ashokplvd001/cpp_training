#include <iostream>

using namespace std;

#define MAX 3


class myQueue
{
	int* arr ;
	int front ;
	int rear ;
	int capacity; 
public :
	 myQueue(int size );

	 bool enqueue(int val);
	 bool dequeue();
	 void display();

};

myQueue::myQueue(int size)
{
	capacity = size;
	arr = new int[size];
	front = 0; 
	rear = 0;
}


bool myQueue::enqueue(int val)
{
	if (rear == MAX)
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

bool myQueue::dequeue()
{
	if (front == rear)
	{
		cout << "stack is empty\n";
		return false;
	}
	cout << arr[front++] << endl;
}

void myQueue::display()
{
	if (front == rear)
	{
		cout << "stack is empty\n";
		return;
	}

	for (int i = front; i < rear; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}



void program1()
{
	myQueue q1(6);

	q1.arr = new int[MAX];

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