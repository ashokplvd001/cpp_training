#include <iostream>
#include <memory>

using namespace std; 

int main()
{
	shared_ptr<int> ptr1 ( new int(5) );

	shared_ptr<int> ptr2;
	cout << ptr1.use_count() << endl;
	cout << ptr2.use_count() << endl;
		ptr2 = ptr1 ; 
		cout << ptr1.use_count() << endl;
		cout << ptr2.use_count() << endl;

	//ptr2 = move(ptr1);	// move not allowed in shared_ptr 

	cout << *ptr2 << endl;
	ptr2 = move(ptr1);

	cout << ptr1.use_count() << endl;
	cout << ptr2.use_count() << endl;

	ptr1 = ptr2; 


	cout << ptr1.use_count() << endl;
	cout << ptr2.use_count() << endl;


	shared_ptr<int> ptr3(new int(6));

	cout << ptr1.use_count() << endl;
	cout << ptr2.use_count() << endl;
	cout << ptr3.use_count() << endl;

	ptr1 = ptr3; 

	cout << ptr1.use_count() << endl;
	cout << ptr2.use_count() << endl;
	cout << ptr3.use_count() << endl;
}