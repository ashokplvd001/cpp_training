/*
Description : Finds the starting positions (0-based index) of the substrings "are" and "i" in a given input string.
				Calculates and prints the sum of these two positions.	
				If either of the substrings is not found in the input, treat its position as -1.
Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 2-5-24
DAte of modification : 2-5--24
Vesrion : 0.1
*/


#include <iostream>


using namespace std;	// using name space to use "cout" and "cin" 
int substring(char*, char*);

int main()
{
	char str[50];
	//cout << "Enter the number\n";
		scanf("%[^\n]s", str);

	int index1 = substring(str, ( char * ) "are");
//	cout << "index1 = " << index1 << endl;
	int index2 = substring(str,( char * )  "i");
	//cout << "index2 = " << index2 << endl;
	cout << "Sum = " <<( index1 + index2)<<endl;

}

int substring(char* str1, char* str2)
{
	int i = 0, j = 0; 
	while (str1[i])
	{
		j = 0; 

		while (str2[j])
		{
			//cout << "str2[j] = "<<str2[j] << endl;
			if (str1[i + j] != str2[j])
				break;
			j++;
		}

		if (str2[j] == '\0')
			return  i; 

		i++;
	}
	return -1; 

}

/*
INTPUT :
We are playing football

OUTPUT :
Sum = 14
*/
