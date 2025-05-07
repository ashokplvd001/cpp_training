#include <iostream>

using namespace std; 

void triangleArea(float base, float height);
void rectangleArea(float length, float height);
void circleArea(float radius);
void displayMenu();

void main( int argc , char ** argv )
{
	int opt = 0;
	float  num1 = 0 , num2 = 0 ; 
	bool flag = false ; 

	displayMenu();
	

	if (argc > 1)
	{
		opt = atof(argv[1]);
		if (opt == 1 || opt == 2  )
		{
			if (argc == 4)
			{
				num1 = atof( argv[2] ); 
				num2 = atof( argv[3] ) ;
			}
			else
			{
				flag = false; 
				cout << "Invalid arguments for the function choosed \n";
			}
		}
		else if (opt == 3)
		{
			if (argc == 3)
				num1 = atof(argv[2]);
			else
			{
				cout << "Invalid arguments for the function choosed \n";
				flag = false;
			}

		}
		
	}
	else
	{
		cout << "Enter the two numbers : ";
		cin >> num1 >> num2; 


		
		cin >> opt;

	}

	


	switch (opt)
	{
	case 1:
		triangleArea( num1 , num2 );
		break;
	case 2 :
		circleArea(num1 );
		break;
	case 3 :
		rectangleArea(num1 , num2 );
		break;
	default :
		cout << "Invalid option\n";
	}
}

void displayMenu()
{
	cout << "Enter the option\n1.area of triangle\n2.area of circle\n3.area of rectangle";

}

void triangleArea( float base , float height)
{
	

	//cout << "Enter the base and height of a triangle : ";
	//cin >> base >> height; 

	cout << "Area of triangle : " << base * height / 2;
}

void rectangleArea( float length , float height)
{

	//cout << "Enter the length and height of a rectangle : ";
	//cin >> lenght >> height;

	cout << "Area of rectagle : " << length * height;
}


void circleArea(float radius )
{


//	cout << "Enter the radius of circle : ";
	//cin >> radius ;

	cout << "Area of radius : " << 3.14 * radius * radius ;
}