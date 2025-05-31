#include <iostream>

using namespace std;
 
class A
{
public : 
	void dispA() { cout << "A is called" << endl; }
};

class B : virtual public A
{

public:
	void disp() { cout << "ok1\n"; }
	void dispB() { cout << "B is called" << endl; }
};

class C : virtual public A
{
public:
	void disp() { cout << "ok2\n"; }
	void dispC() { cout << "C is called" << endl; }
};

class D : virtual public B , virtual  public C
{
public:
	void dispD() { cout << "D is called" << endl; } 
};

int main()
{
	D objD; 
	objD.dispB();
	objD.dispC();
	objD.dispD();
	objD.dispA();
//	objD.disp();

}



