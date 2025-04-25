
#include <iostream>

using namespace std;

enum language
{
	e_english = 100 ,
	e_telugu ,
	e_malayalam
};

enum genre
{
	e_action = 1,
	e_triller ,
	e_other 
};

void switchFun()
{
	int inputGenre, inputLang;
	
	cout << "Enter the language: ";
	cin >> inputLang;

	switch (inputLang)
	{
	default:
		cout << "Invalid option\n" << endl;
		break;
	case e_english:
		cout << "choosed english\n" << endl;
			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
			default:
				cout << "Invalid option\n" << endl;
				break;
			case e_action:
				cout << "choosed action\n" << endl;
				break;
			case e_triller:
				cout << "choosed triller\n" << endl;
				break;
			case e_other:
				cout << "choosed other\n" << endl;
				break;
			}
		break;
	case e_telugu:
		cout << "choosed english\n" << endl;
			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
			default:
				cout << "Invalid option\n" << endl;
				break;
			case e_action:
				cout << "choosed action\n" << endl;
				break;
			case e_triller:
				cout << "choosed triller\n" << endl;
				break;
			case e_other:
				cout << "choosed other\n" << endl;
				break;
			}
			break;
	case e_malayalam:
		cout << "choosed english\n" << endl;
			cout << "Enter the Genre: ";
			cin >> inputGenre;
			switch (inputGenre)
			{
			default:
				cout << "Invalid option\n" << endl;
				break;
			case e_action:
				cout << "choosed action\n" << endl;
				break;
			case e_triller:
				cout << "choosed triller\n" << endl;
				break;
			case e_other:
				cout << "choosed other\n" << endl;
				break;
			}
			break;

		}
	}
