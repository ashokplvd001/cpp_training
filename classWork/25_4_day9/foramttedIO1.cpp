/*
=========================================
slno | id  | name | m1 | m2 | m3 | m4 | avg |

*/

void foramttedIO1()
{
	float s1m1, s1m2, s1m3, s1m4, s2m1, s2m2, s2m3, s2m4, s3m1, s3m2, s3m3, s3m4;
	float s4m1, s4m2, s4m3, s4m4, s5m1, s5m2, s5m3, s5m4;

	char s1[20], s2[20], s3[20], s4[20], s5[20];

	float av1 , av2 , av3 , av4 , av5 

	int slno = 0;

	printf("Enter the five student name ");
	scanf("%S%s%s%s%s",);

	printf("Enter the student 1 marks in four subjects ");
	scanf("%f%f%f%f%f",s1m1,s1m2,s1m3,s1m4);
	av1 = (s1m1 + s1m2 + s1m3 + s1m4) / 4.0;
	printf("Enter the student 2 marks in four subjects ");
	scanf("%f%f%f%f%f", s2m1, s2m2, s2m3, s2m4);
	av2 = (s2m1 + s2m2 + s2m3 + s2m4) / 4.0;
	printf("Enter the student 3 marks in four subjects ");
	scanf("%f%f%f%f%f", s3m1, s3m2, s3m3, s3m4);
	av3 = (s31m1 + s3m2 + s3m3 + s3m4) / 4.0;
	printf("Enter the student 4 marks in four subjects ");
	scanf("%f%f%f%f%f", s4m1, s4m2, s4m3, s4m4);
	av4 = (s1m1 + s1m2 + s1m3 + s1m4) / 4.0;
	printf("Enter the student 5 marks in four subjects ");
	scanf("%f%f%f%f%f", s5m1, s5m2, s5m3, s5m4);
	av5 = (s1m1 + s1m2 + s1m3 + s1m4) / 4.0;

	void printFun(int slno, char* name, float m1, float m2, float m3, float m4, );
	void 	printDesign();
	printDesign();
	printf("%010s")
		printFun(slno, s1, s1m1, s1m2, s1m3, s1m4, av1);

}

void printFun(int slno, char* name, float m1, float m2, float m3, float m4, )
{
	printDesign();

}

void printDesign()
{
	for (int i = 0; i < 32; i++)
		ptinf("=");
	printf("\n");
}







/*
#include <cstdio>

struct s_student
{
	int id;
	char name[20];
	int marks[4];
	int avg; 
};

void formattedIO1()
{
	int students = 5; 

	struct s_student s[5]; 

	for (int i = 0; i < students; i++)
	{
		s[i].id = i + 1; 
		printf("Enter student name : ");
		scanf("%s", s[i].name);
		printf("Enter m1 , m2 , m3 , m4 marks");
		for (int j = 0; j < 4; j++)
			scanf("%d", &s[i].name[j]);


	}
	

}
*/