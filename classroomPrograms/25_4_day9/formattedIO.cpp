#include <cstdio>

void formattedIO()
{
	int a = 10;
	float b = 15.5; 
	char c = 'A';
	double d = 101.111;
	char s[20] ;
	printf("\n %c \n %d \n %f \n %lf \n %s \n", c, a, b, d, "ashok");
	scanf("%c%d%f%lf%s", &c, &a, &b, &d, s);
	printf("\n %c \n %d \n %f \n %lf \n %s \n", c, a, b, d, "ashok");
	scanf("%d%f%lf%s%c", &a, &b, &d, s,%c);
	printf("\n %c \n %d \n %f \n %lf \n %s \n", c, a, b, d, "ashok");
	// for char it take the previous '\n' char , so to avoid that bug , if we give space before , we read it , it will avoid it 
	scanf("%d%f%lf%s %c", &a, &b, &d, s, % c);		
	printf("\n %c \n %d \n %f \n %lf \n %s \n", c, a, b, d, "ashok");
	scanf("%3d%f%lf%s %c", &a, &b, &d, s, % c);
	printf("\n %c \n %05d \n %f \n %lf \n %s \n", c, a, b, d, "ashok");


} 