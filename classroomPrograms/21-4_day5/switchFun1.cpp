
#include <iostream>

using namespace std; 

enum foodMenu {
	e_noodles ,
	e_biriyani ,
	e_fried_rice 
};
enum category
{
	e_chicken ,
	e_egg 

};
enum taste
{
	e_less_spice ,
	e_medium_spice , 
	e_more_spice 
};

void switchFun1()
{
	int foodMenuOpt;
	cout << "Enter option 1)noodles 2)biriyani 3)fried_rice";
	cin >> foodMenuOpt;
	int category;
	cout << "Enter option 100)chicken 101)egg" ;
		cin >> category;
	int tasteOpt;
		cout << "Enter option 1000)less_spice 1001)medium_spice 1002)more_spice";
		cin >> tasteOpt;


		switch (foodMenuOpt)
		{
		case e_noodles:
		{
			cout << "choosed noodles\n" << endl;
			switch (tasteOpt)
			{
			default:
				cout << "invalid option" << endl;
				break;

			case e_less_spice:
				cout << "choosed less_spice" << endl;
				break;
			case e_medium_spice:
				cout << "choosed medium_spice" << endl;
				break;
			case e_more_spice:
				cout << "choosed less_spice" << endl;
				break;
			}

			break;
		}
		case e_biriyani:
		{
			cout << "choosed biriyani\n" << endl;
			switch (tasteOpt)
			{
			default:
				cout << "invalid option" << endl;
				break;

			case e_less_spice:
				cout << "choosed less_spice" << endl;
				break;
			case e_medium_spice:
				cout << "choosed medium_spice" << endl;
				break;
			case e_more_spice:
				cout << "choosed less_spice" << endl;
				break;
			}

			break;
		}
		case e_fried_rice:
		{
			cout << "choosed noodles\n" << endl;
			switch (tasteOpt)
			{
			default:
				cout << "invalid option" << endl;
				break;

			case e_less_spice:
				cout << "choosed less_spice" << endl;
				break;
			case e_medium_spice:
				cout << "choosed medium_spice" << endl;
				break;
			case e_more_spice:
				cout << "choosed less_spice" << endl;
				break;
			}
			break;
		}
		}
	cout << "menu fun completd\n";
}

