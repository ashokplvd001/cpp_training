#include "header.h"


void* createMemSpace(void* ptr, int dataTypeSize, int noOfElements)
{
	void* returnPtr = nullptr;

	returnPtr =  realloc(ptr, dataTypeSize * noOfElements);
	return returnPtr; 
}
