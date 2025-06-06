#include <iostream>

#include "header.h"
using namespace std; 

StorageUnit::StorageUnit()
{
	RAM = new char[64 * 1024] { ~0, };
}
bool StorageUnit::storeInMemory(int index, short int data)
{
	RAM[index] = (char)data & 0x00ff;
	RAM[index + 1] = (char)(data >> 8) & 0x00ff;
	return true; 
}
bool StorageUnit::storeInRegisters(int index, short int data)
{
	registers[index] = data;
	return true; 
}
char StorageUnit::getFromMemory(int index)
{
	return RAM[index];
}
short int  StorageUnit::getFromRegisters(int index)
{
	return registers[index];
}