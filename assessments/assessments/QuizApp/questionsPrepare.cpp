#include <cstdio>
#include <string>
#include "common.h"
#include "questionsPrep.h"



bool qustionsPrep(QUIZ* quiz1, string fileName)
{
	QUES quest = { "" , };
	int quesCount = 0;


#ifdef DEBUG 
	cout << "filename : " << fileName << endl;
#endif

	//fileName =
	//	"C:\\Users\\Administrator\\Desktop\\cpp_training_git_sync\\assessments\\assessments\\QuizApp\\" //x64\\Debug\\"
	//	+ fileName;

#ifdef DEBUG 
	cout << "filename : " << fileName << endl;
#endif

	FILE* fptr = fopen((const char*)fileName.c_str(), "r");


#ifdef DEBUG

	perror("fopen");

	cout << "fptr : " << fptr << endl;

#endif


	if (fptr == NULL)
	{
		perror("fopen");
		return false;
	}
		



	QUES* tempPtr = nullptr;

	while (prepQuestionAns(fptr, &quest))
	{


		quesCount++;
		///tempPtr = (QUES*)createMemory(quiz1->quizQuestions, sizeof( QUES ), quesCount);
		tempPtr = (QUES*)malloc(sizeof(QUES) * 1);
#ifdef DEBUG 
		cout << "Cout1\n";
		cout << "quesCount = " << quesCount << endl;
		cout << "tempPtr = " << tempPtr << endl;
		cout << "quiz1->quizQuestions = " << quiz1->quizQuestions << endl;
#endif

		if (tempPtr == nullptr)
			return false;

		quiz1->quizQuestions = tempPtr;
#ifdef DEBUG
		cout << "cout11\n";
		*tempPtr = QUES{};
		cout << "count12\n";
#endif 


		quiz1->quizQuestions[quesCount - 1] = QUES{};

#ifdef DEBUG 
		cout << "quesCount = " << quesCount << endl;
		cout << "Cout2\n";
		cout << "quesPtr.quesQuestion =  " << quiz1->quizQuestions[quesCount - 1].quesQuestion << endl;
#endif

		if (copyInfo(&quiz1->quizQuestions[quesCount - 1], quest) == false)
			return false;

#ifdef DEBUG 
		cout << "Cout3\n";
#endif
		quest = QUES{};
	}

	quiz1->quizQuestionCount = quesCount;

	quiz1->quizRandQuestionsList = nullptr;

	quiz1->quizRandQuestionsList = (short int*)createMemory(quiz1->quizRandQuestionsList, sizeof(short int), quesCount);

	if (quiz1->quizRandQuestionsList == nullptr)
		return false;


	for (int i = 0; i < quesCount; i++)
		quiz1->quizRandQuestionsList[i] = 0;

	fclose(fptr);

	return true;
}



void* createMemory(void* ptr, unsigned int sizeOfDt, unsigned int noOfElements)
{
	void* tptr = (void*)realloc(ptr, sizeOfDt * noOfElements);
	return tptr;
}


bool copyInfo(QUES* quesPtr, QUES temp)
{

	quesPtr->quesQuestion = temp.quesQuestion;


#ifdef DEBUG 
	cout << "Cout4\n";
	cout << "quesPtr->quesQuestion =  " << quesPtr->quesQuestion << endl;
#endif

	for (int i = 0; i < NO_OF_CHOICE; i++)
	{
#ifdef DEBUG 
		cout << "quesPtr->quesOpt = " << quesPtr->quesOpt[i] << endl;
#endif

#ifdef DEBUG 
		cout << "Cout5\n";
#endif


		quesPtr->quesOpt[i] = temp.quesOpt[i];
	}


	quesPtr->quesRightOpt = temp.quesRightOpt;
#ifdef DEBUG 
	cout << "Cout5\n";
#endif
	return true;
}



bool prepQuestionAns(FILE* fptr, QUES* quest)
{
	bool flag = false;
	char ch1 = 0, ch2 = 0;

	for (int i = 0; i < NO_OF_CHOICE; i++)
		quest->quesOpt[i] = "";
	quest->quesQuestion = "";
	quest->quesRightOpt = 'A';


	do
	{
		if ('Q' == fgetc(fptr))
		{
			if (')' == fgetc(fptr))
			{
				while ((ch1 = fgetc(fptr)) != '\n' && ch1 != EOF)
				{
					quest->quesQuestion = quest->quesQuestion + ch1;
				}

				if (quest->quesQuestion != "")
					flag = true;
			}
		}

		if (feof(fptr))
			return false;

	} while (flag == false);


	do
	{
		ch1 = tolower(fgetc(fptr));
		switch (ch1)
		{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		{
			if (fgetc(fptr) == ')')
			{
				while ((ch2 = fgetc(fptr)) != '\n' && ch2 != EOF)
				{
					quest->quesOpt[ch1 - 'a'] = quest->quesOpt[ch1 - 'a'] + ch2;
				}
			}
		}
		break;
		case 'r':
		{
			if ((ch2 = fgetc(fptr)) == ')')
			{
				ch2 = toupper(fgetc(fptr));
				quest->quesRightOpt = ch2;
			}

		}

		}
		if (feof(fptr))
			return true;
	} while (ch1 == 'Q');

	fseek(fptr, -1, SEEK_CUR);


	return true;


}