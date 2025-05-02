/*
Description : Write a program that takes two comma-separated lists of integers as input. For each integer N in the first list, the program needs to find the count of its occurrences (denoted as C) in the second list. The program should print the result N-C for each integer N in the first list.



Auther : Ashok Giddaluru ( 293950 )
Date of Creation : 2-5-24
DAte of modification : 2-5--24
Vesrion : 0.1
*/


#include <iostream>

using namespace std;	// using name space to use "cout" and "cin" 

/*
int main()
{
	char str1[50];
	cin >> str1;
	char str2[50];
	cin >> str2;
	
	
	char* ptr1 = str1;
	char* ptr2 = str2; 

	ptr2 = strtok(ptr2, ",");
	int num1 = 0, num2 = 0; 
	 int iter = 1; 
	 int count = 0 ; 
	while (ptr1)
	{
		
		num1 = atoi(ptr1);

		ptr2 = strtok(ptr2, ",");
		count = 0; 
		while (ptr2)
		{
		
			num2 = atoi(ptr2);

			if (num1 == num2)
				count++;

			ptr2 = strtok(NULL, ",");
		}
		int i = 0; 
		ptr1 = strtok(str1, ",");

		while (i < iter)
		{
			ptr1 = strtok(NULL, ",");
			i++;
		}

		iter++;

		cout << num1 << '-' << count << endl;


	}
	*/

int main()
{
	char str1[50];
	cin >> str1;
	char str2[50];
	cin >> str2;


	//char* ptr1 = str1;
	//char* ptr2 = str2;
	
	
	int i = 0 , j = 0; 
	int count = 0; 

	while (str1[i++] == ',');
	i--;
	while (str1[i])
	{
		j = 0; 

			count = 0;
			while (str2[j++] == ',');
			j--;
			while (str2[j])
			{
				

				if (atoi(str2 + j) == atoi(str1 + i))
					count++;

				while (str2[j++] != ',' && str2[j] != '\0');
			}
					
			cout << atoi(str1 + i) << '-' << count << endl;
			while (str1[i++] != ',' && str1[i] != '\0');

	}


}