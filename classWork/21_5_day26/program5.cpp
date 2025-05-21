#include <iostream>

#include "Student5.h"

using namespace std;

void program5()
{
	Student5 s1;

	s1.setDetails("25UST023", "issokay", "developer", "6306306306");

	s1.getDetails();

	s1.updateSemWiseMarks(4, 123);

	s1.printSemWiseMarks();
}