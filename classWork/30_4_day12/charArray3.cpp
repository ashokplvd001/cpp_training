#include <iostream>
using namespace std; 

void charArray3()
{

	char dest[6], src[20] = "1234567890123456789";

	//strcpy(dest, src);

	printf("%s\n", dest);

	strncpy(dest , src, 4 );
	printf("%s\n", dest);

	strcpy(dest, "okok");
	char str1[20] = "hello";
	
	strcat(str1, dest);
	printf("%s\n", str1);

	strcpy(str1, src);

	strcpy(str1, "ashok");
	printf("%s\n", str1);


	for (int i = 0; i < 20; i++)
	{
		cout << (int)str1[i] << " - " << str1[i] << endl;
	}

	char  *ptr = strcat(strcat(strcpy(str1, "ashok"), " hello "), "world");
	printf("%s\n", str1);
	cout << "ptr of string = " << ptr << endl;
	


}