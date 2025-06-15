#include <iostream>

using namespace std; 

int main()
{
	shared_ptr<int> ptr1 = make_shared<int>(34);
	cout << *ptr1 << endl;
	cout << "Count1 : " << ptr1.use_count() << endl;

	weak_ptr<int> ptr2 = ptr1; 
	//cout << *ptr2 << endl;
	cout << "Count1 : " << ptr1.use_count() << endl;

	cout << "Count : " << ptr2.use_count() << endl;

	auto temp = ptr2.lock();
	cout << *temp << endl;
	cout << "Count : " << ptr2.use_count() << endl;

	auto temp1 = ptr2.lock();
	cout << *temp1<< endl;
	cout << "Count : " << ptr2.use_count() << endl;
	cout << "Count1 : " << ptr1.use_count() << endl;
	ptr2.reset();
	cout << *temp1 << endl;
	cout << "Count : " << ptr2.use_count() << endl;
	cout << "Count1 : " << ptr1.use_count() << endl;
}

