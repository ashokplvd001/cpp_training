/*


*/


#include <iostream>
#include <cstring>

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
	
	//
	void fun1(void);
	void fun2(void);
	void fun3(void);
	void fun4(void);
	void fun5(void);
	//fun1();
	//fun2();
	//fun3();
//fun4();
	fun5();


	cout << 1 <<endl ;
}

void fun1()
{
	// dont use a , b,  c  some randome names , use proper names 

	int itr1 = 0, itr2 = 0;  // to store integer values  

	char first_name[20] = { 0 };
	//char second_name[20];

//	memset(second_name, '\0', sizeof(second_name));


	for (int itr2 = 1; itr2 < 5; itr2++)
		cout << itr2 << endl;

	cout << itr2 << endl;

	strcat_s(first_name, "bhima");

	//strcat(first_name, "bhima");



	cout << first_name << endl;


	register int i;
	for (i = 0; i < 10; i++)
		cout << i << endl;
	//
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	//

		//
	{
		int itr1 = 202;
		cout << "itr1" << &itr1 << endl;

	}


	cout << "itr1" << &itr1 << endl;

}


void fun2(void)
{
	const int val = 20; 
	//val = 20; 
	//volatile 
	void statFun(void);
	for( int i = 0  ; i < 3 ;i++ )
	statFun();

}

void statFun()
{
	int temp = 10;
	temp = temp + 5; 
	cout << "temp : " << temp << endl;


	static int var = 10;		// scope of the function
	var = var + 5; 
	cout << "var : " << var << endl;
}
int* fun3a(int v);
void fun3()
{
	int* ptr = NULL; 
	ptr = fun3a(10);	// dangling pointer
	cout << *ptr << endl;
	
}

int* fun3a(int v)
{
	int r = 34; 
	r = r + 10; 
	return &r;
}
void fun4()
{
	int a = 3.4; 
	int b = '4';
	
	float f = a + b + 2.3 ; 
	cout << "f = " << f << endl;
	int r = f; 
	cout << "result = " << r << endl;
	double d = f; 
	cout << "d = " << d << endl;


	double price = 13.6;
	
	int aa = 10; 
	int bb = 3; 
	float ret1 = 10 / 3; 
	cout << "ret1 : " << ret1 << endl;
	float ret2 = (float)aa / (float)bb;
	cout << "ret2 : " << ret2 << endl;
	int cc = (float)ret1; // works fine


	
}

void fun5()
{
	/*
	int a = b = c = 10; 
	a = b = c = 50;
	cout << "a : " << a << "b : " << b << "c : " << c << endl;
	*/

	int x[] = { 10,20,30,40,50 };
	cout<<" "<<x[4]<<x[3]<<2[x]<<1[x]<<x[0]<<
}






