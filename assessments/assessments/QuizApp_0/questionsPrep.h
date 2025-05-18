#include "common.h"


bool qustionsPrep(QUIZ* quiz1, string fileName);

bool prepQuestionAns(FILE * fptr , QUES* quest);

void * createMemory(void* ptr, unsigned int sizeOfDt, unsigned int noOfElements);

bool copyInfo(QUES* quesPtr, QUES temp);

