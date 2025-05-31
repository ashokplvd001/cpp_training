#include <iostream>
#include <Windows.h>
using namespace std;

template <typename T1 , typename T2 >
class PrintClass
{
	T1 var1;
	T2 var2;
public:
	PrintClass(T1 v1 , T2 v2 ) :var1(v1), var2(v2) {}
	void print()
	{
		cout << var1 << endl;
		cout << var2 << endl;
	}
};


int main()
{
	char arr[40] = "wregerge";
	PrintClass<int,string> obj1(10 , "sergeedheh");
	obj1.print();
	Sleep(6000);
	system("clear");
	PrintClass<int, char * > obj2(10,arr);
	obj2.print();
}