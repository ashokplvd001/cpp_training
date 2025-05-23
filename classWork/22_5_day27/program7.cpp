#include <iostream>

using namespace std;

class T
{
	int val; 
	friend void func1(T& t);	// it should declared in public 
public:
	T(int v) {	val = v;  }
	void display() { cout << val << endl; }
//	friend void func1(T& t);	// it should declared in public 
};

void func1(T& t)			// frd function 
{
	t.display();
	t.val = 1001;	// we can access private memberof that class bcz it is frd function
}

void program7()
{
	T t1(10) ;
	func1(t1);
	t1.display();
	//t1.dis 
}