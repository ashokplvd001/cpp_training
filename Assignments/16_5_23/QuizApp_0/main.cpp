#include "common.h"
#include "questionsPrep.h"

using namespace std;


int main()
{
	
	string fileName = "" ;
	QUIZ quiz1 = { nullptr , 0 , nullptr } ;

	
	cout << "Enter the quiz name : ";
	cin >> fileName; 
	
	if (qustionsPrep(&quiz1, fileName) == false)
	 {
		cout << "Failed to prepare questions ; ";
			return -1;
	 }


	 for (int i = 0; i < quiz1.quizQuestionCount; i++)
	 {
		 cout <<'Q' << i << ")		" << quiz1.quizQuestions[i].quesQuestion << endl;
		 for (int j = 0; j < NO_OF_CHOICE; j++)
			 cout << char('A' + j) << quiz1.quizQuestions[i].quesOpt[j] << endl;

		 cout << "Right answer is : "
			 << quiz1.quizQuestions[i].quesOpt[quiz1.quizQuestions[i].quesRightOpt - 'A'] << endl;

	 }


}




