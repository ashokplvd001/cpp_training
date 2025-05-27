#include <iostream>

using namespace std;

class Employee1
{
	int e_id;
	string e_name;
public:
	Employee1(int id, string name);
	Employee1();
	void display() const;
	bool getId(int id);
	bool getName(string name);
};

bool Employee1::getId(int id)
{
	e_id = id;
	return true;
}

bool Employee1::getName(string name)
{
	e_name = name;
	return true;
}

Employee1::Employee1()
{
	e_id = 0;
	e_name = "none";
}

Employee1::Employee1(int id, string name)
{
	e_id = id;
	e_name = name;
}

void Employee1::display() const
{
	cout << "e_id = " << e_id << endl;
	cout << "e_name = " << e_name << endl;
}


class myStack2
{
	int s_top;
	int s_bottom;
	int s_capacity;
	Employee1* s_arr;
public:
	myStack2(int size);
	int push(Employee1 val);
	int pop();
	void display();
};


myStack2::myStack2(int size)
{
	s_arr = new Employee1[size];
	s_capacity = size;
	s_top = -1;
	s_bottom = -1;
}


int myStack2::push(Employee1 e)
{
	if (s_top == s_capacity - 1)
	{
		cout << "stack is full\n";
		return -1;
	}
	s_arr[++s_top] = e;
	return 0;
}

int myStack2::pop()
{
	if (s_top == s_bottom)
	{
		cout << "Stack is empty\n";
		return -1;
	}

	cout << "pop element is : \n";
	s_arr[s_top].display();

	s_top--;
	return 0;
}

void myStack2::display()
{
	if (s_top == s_bottom)
	{
		cout << "stack have no elements to print\n";
		return;
	}

	for (int i = s_top; i > s_bottom; i--)
		s_arr[i].display();

}

int main()
{
	myStack2 st(6);

	string s = "wfer";
	char ch = 48;
	Employee1 e1(101, s);

	st.push(e1);
	st.pop();


	for (int i = 0; i <= 7; i++)
	{
		cout << "i = " << i << endl;
		e1.getId(i + 10);
		ch++;
		s = s + ch;
		e1.getName(s);
		st.push(e1);
		st.display();
		//	st( )
	}

	for (int i = 0; i <= 7; i++)
	{
		cout << "i = " << i << endl;
		st.pop();
		st.display();

	}


}