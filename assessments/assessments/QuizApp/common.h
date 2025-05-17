#pragma once

#include <iostream>
#include <string>
using namespace std ; 

#define NO_OF_CHOICE 4

#define DEBUG 


typedef struct _student
{
	int stdtId ; 
	string stdtName ;
	int stdtCorrectAns;
	int stdtMarks; 
}STDT;


typedef struct _question
{
	string quesQuestion;
	string quesOpt[ NO_OF_CHOICE ] ;
	char quesRightOpt ;
}QUES;


typedef struct _quiz
{
	QUES* quizQuestions; 
	short int quizQuestionCount;
	short int* quizRandQuestionsList;
}QUIZ;



////////////


//////////