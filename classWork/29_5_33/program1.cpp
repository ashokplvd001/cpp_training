#include <iostream>

using namespace std; 

class B
{
public:
	 void printB() { cout << "print B\n"; }
	 virtual void disp() { cout << "disp from B\n"; }
	
};



class D : public B
{
public:
	void printD() { cout << "print D\n"; }
	//void printD() override { cout << "print D\n"; }
	void disp() override { cout << "disp from D\n"; }
};


int main()
{
	D d; 
	d.printD();
	d.disp();
	/*
	B * ptr = new B; 

	ptr->printB();
	ptr->disp();
	*/
	
	B * ptr1 = new D;
	

	ptr1->printB();
	ptr1->disp();

	cout << "size of B " << sizeof(B) << endl;
	cout << "size of D " << sizeof(D) << endl;


}