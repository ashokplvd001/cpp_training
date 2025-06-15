#include <iostream>
#include <functional>

using namespace std; 

int main()
{
	auto greet = []() { cout << "hello World" << endl; };
	greet();

	/*
	greet = []() { cout << "hello W" << endl; };
	greet();
	*/

	function<void(void)> greetx;

	 greetx = []() { cout << "hello World" << endl; };
	greetx();

	
	greetx = []() { cout << "hello W" << endl; };
	greetx();
	



	auto greet1 = [](string word) { cout << "hello World : " << word << endl; return "haha";};
	cout << greet1("okok") << endl;


}