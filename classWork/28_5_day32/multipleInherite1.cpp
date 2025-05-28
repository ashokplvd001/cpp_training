#include <iostream>

using namespace std; 

class A
{
	int a; 
public : 
	A(int x) :a(x) { cout << "Contr A got called\n";  }
	~A() { cout << "Destuctor A got called\n"; }
	void dispA() { cout << "a = " << a << endl; }
};

class B
{
	int b;
public:
	B(int y) :b(y) { cout << "Contr B got called\n"; }
	~B() { cout << "Destuctor B got called\n"; }
	void dispA() { cout << "b = " << b << endl; }
};


// the parent constructors called and destroyed in the order how the order we inheriting
// first A cionstructor calls next B constructor called .
class C : public A, public B
	// first B cionstructor calls next A constructor called .
	//class C : public B, public A
{
	int c; 
public : 
	C(int x, int y, int z) :c(z), B(y), A(x) { cout << "Contr C got called\n"; }
	~C() { cout << "Destuctor C got called\n"; }

	void dispA() { cout << "c = " << c << endl; }

};


int main()
{
	C cobj(10, 20, 30);
}