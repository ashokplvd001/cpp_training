#include <iostream>

using namespace std; 


class A
{
private:
	int x;
protected :
	int y;
public : 
	A()
	{
		cout << "A constr got called\n";
		x = 10; 
		y = 20; 
	}
	void dispA()
	{
		cout << "hello from A\n";
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};
class B : public A
{
private:
	int a;
protected:
	int b;
//private :			// if it private this function cant be called in side B class 
	// only protected and public and be accessed 
	void proMethod()
	{
		cout<<"A: protected method called\n" ;
	}
public:
	B()
	{
		cout << "B constr got called\n";
		a = 100;
		b = 200;
	}
	void dispB()
	{
		cout << "hello from A\n";
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
	void protectedB()
	{
//		cout << "x = " << x << endl;	// x is private we cant use 
		cout << "y = " << y << endl;
		proMethod();
	}
};


int main()
{
	A objA;
	B objB;

	objA.dispA();
	objB.dispA();
	objB.dispB();

//	objA.proMethod(); private or protected cant be called outside the class

	objB.protectedB();

}