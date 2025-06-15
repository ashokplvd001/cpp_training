#include <iostream>
#include <memory>

using namespace std; 

int main()
{
	unique_ptr<int> p(new int(4));

	cout << *p << endl;

	unique_ptr<int> p2( &(*p) );	// compiler error

	unique_ptr<int> p2 ( move(p )) ;

}