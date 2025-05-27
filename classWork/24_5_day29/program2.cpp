#include <iostream>

using namespace std;



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
	if (rear == capacity )
	{
	//	if (front != 0)
		{
	//		for( int i = front ; i <  )
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



void program2()
{
	myQueue q1(6);

	cout << "queue class\n";
	q1.display();
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
	q1.enqueue(40);
	q1.display();
	q1.dequeue();

	q1.display();
	q1.dequeue();
	q1.display();

	q1.dequeue();
	q1.display();
	q1.dequeue();
	q1.display();





}