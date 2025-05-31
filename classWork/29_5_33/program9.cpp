#include <iostream>

using namespace std; 

template <typename t1 , typename t2 > 

class calculator
{
	t1 v1;
	t2 v2;

public:
	calculator(t1 v1, t2 v2) : v1(v1), v2(v2) {}
	double add() { return v1 + v2; }
	double sub() { return v1 - v2; }
	double mul() { return v1 * v2; }
	double div() { if (v2 == 0)return 0; return v1 / v2; }
	void display() { cout << "a = " << v1 << " , b = " << v2 << endl;}
};


int main()
{
	calculator<int, float > cal1(10, 543);

	cal1.display();
	cout<<"add = "<<cal1.add()<<endl;
	cout << "sub = " << cal1.sub() << endl;
	cout << "mul = " << cal1.mul() << endl;
	cout << "div = " << cal1.div() << endl;

}