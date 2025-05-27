#include <iostream>

using namespace std; 

class Test
{
	int emp_id; 
public : 
	Test()
	{
		emp_id = 0; 
	}
	Test(int emp_id) { emp_id = emp_id ;  }


	void checkAddress()
	{
		int x, y, z; 
		cout << &x << endl;
		cout << &y << endl;
		cout << &z << endl;
		cout << "this = " << this << endl;
		cout << "&emp_id = " << &emp_id << endl;
		cout << "&this->emp_id = " << &(this->emp_id) << endl;
		setV(getV());

	}
	void setV(int emp_id) 
	{
		//Test** ptr = &this;
		//cout << "&this = " << &this << endl;

		cout << "this = " << this << endl;	
		cout << "&emp_id = " << &emp_id << endl;
		cout << "&this->emp_id = " << &(this->emp_id) << endl;
		this->emp_id = emp_id; 
		//cout << "&this = " << &this << endl;
	}
	int getV() {
		return emp_id; }
};

int main()
{
	Test t1;
	cout << "t1 addr = " << &t1 << endl;
	cout << "t1 value" << t1.getV() << endl;
	Test t2(10);
	cout << "t2 value" << t1.getV() << endl;

	t1.setV(100);
	cout << "t1 value" << t1.getV() << endl;
	t2.setV(200);
	cout << "t2 value" << t2.getV() << endl;


	t1.checkAddress();
}





