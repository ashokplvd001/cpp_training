#include <iostream>

using namespace std; 

class Test
{
	int x;
	int y;
public:
	Test(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Test& setX(int x)
	{
		this->x = x;
		return *this;
	}
	Test& setY(int y)
	{
		this->y = y;
		return *this;
	}

	void display()
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};




int main()
{
	Test objT(5, 6);
	objT.display();

	objT.setX(101);
	objT.setX(101);
	objT.display();

	Test obj2 = objT;
	objT.display();
	obj2.display();

	obj2 = objT.setX(10);
	objT.display();
	obj2.display();

	obj2.setY(100).setX(50);		// obj2.setY( 100 ) ; obj2.setX( 50 ) ; 

	Test& obj3 = objT;

	obj3.display();

	cout << "address of obT = " << & objT << endl;
	cout << "address of ob2 = " << &obj2 << endl;
	cout << "address of ob3 = " << &obj3 << endl;

}