#include <iostream>
using namespace std;

class M;

class N
{
private :
	int val; 
public : 
	N(int v) { val = v; }
	void display() { cout << val << endl; }
	friend void fun1(N & , M & );
};

class M
{
private:
	int j;
public:
	M(int v) { j = v;  }
	void display() { cout << j << endl; }
	friend void fun1(N&, M&);
};

void fun1(N& n, M& m)
{
	n.val = 1000; 
	m.j = 2000; 
}

void program9()
{
	M m( 10); 
	N n( 20);

	m.display();
	n.display();

	fun1(n, m);
	
	m.display();
	n.display();

}