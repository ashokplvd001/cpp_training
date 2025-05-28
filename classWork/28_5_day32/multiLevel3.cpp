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

class B : protected A
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
		dispA();	// can use only inside class, 
		cout << "a = " << a << endl; 
		cout << "b = " << b << endl;cout << "c = " << c << endl;
	}
};


class D : public C
{
protected:
	int d;
public:
	D(int x, int y, int z, int zz) :C(x, y,z), d(zz) { cout << "Contr B got called\n"; }
	~D() { cout << "Destuctor B got called\n"; }
	void dispC() {
		dispA();	// can use only inside class, 
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;cout << "c = " << c << endl;
	}
};




int main()
{
	D obj(20, 30, 40);
	obj.dispC();
	//obj.dispA();	// B inherite A  using protected access specifier
}