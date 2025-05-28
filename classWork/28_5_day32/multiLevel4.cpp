#include < iostream>

using namespace std;

class A
{
protected : 
	int a; 
	void dispPrt() { cout << "A : method of protected\n"; }
public:
	A() { a = 10;  }
	void dispA( ){
		cout << "A : a = " << a << endl;
	}
};

class B : protected A
{
public : 
	void dispB()
	{
		cout << "scope of B\n";
		a = 20;
		dispPrt();
		dispA();
	}
};


class C : protected B
{
public : 
	void dispC()
	{
		cout << "scope of C\n";
		dispB();
	}



};


int main()
{
	B objB; 
	objB.dispB();
//	objB.dispA();		// if B inherite A by using private or protected then we cant use it 

	C objC; 
	objC.dispC();
	/*
	  if i want to restrict the B interfaces from acccesig directly throw C object
	 if i inherite with protect or private i can restric 
	objC.dispB();
	*/
}
