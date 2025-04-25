#include <iostream>

using namespace std; 
int gotoFunDisplay();

void gotoFun()
{

	/*
	int v1 = 10; 
	if (v1 > 10)
		goto END;

	else
		cout << "within the limit\n";
		*/

	int ret , flag = 0 ;
	while (1)
	{
		ret = gotoFunDisplay();
		switch (ret)
		{
		case 1:
			cout << "Addtion\n";
			break;
		case 2:
			cout << "Subtraction\n";
			break;
		case 3:
			cout << "Multiplication\n";
			break;
		case 4:
			cout << "Divition\n";
			break;
		case 0:
			cout << "Exiting the loop\n";
			//goto END;
			flag = 1; 
			break;
		default:
			cout << "Invalid input\n";
		}
		if (flag ==1 )
			break; 
	}

	void gotolabel();
//END:
	cout << "function completed\n";
	gotolabel();
	//goto issokay :
	cout << "skipped by issokay";

	return ; 

}

void gotolabel()

{
	cout << "entered to label fun\n";
//	issokay:
	cout << "yes i excuted\n";

}


int gotoFunDisplay()
{
	int ch;
	cout << "Press, 1.Addition 2.Sub 3.Mul 4.Div 0.Exit choice: \n";
		cin >> ch;

	return ch;
}