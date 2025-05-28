#include <iostream>

using namespace std;

class A
{
protected:
	int a;
public:
	A(int x) :a(x) { cout << "Contr A got called\n"; }
	~A() { cout << "Destuctor A got called\n"; }
	void dispA() { cout << "a = " << a << endl; }
};

class B : private A
{
protected:
	int b;
public:
	B(int x, int y) :b(y), A(x) { cout << "Contr B got called\n"; }
	~B() { cout << "Destuctor B got called\n"; }
	void dispB() { cout << "a = " << a << endl; cout << "b = " << b << endl; }
};

class C : public B
{
protected:
	int c;
public:
	C(int x, int y, int z) :B(x, y), c(z) { cout << "Contr B got called\n"; }
	~C() { cout << "Destuctor B got called\n"; }
	void dispC() {
		//cout << "a = " << a << endl; 
		cout << "b = " << b << endl;cout << "c = " << c << endl;
	}
};


int main()
{
	C obj(20, 30, 40);
	obj.dispC();
//	obj.dispA();	// B inherite A  using private access specifier
}