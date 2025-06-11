#pragma once

class StorageUnit
{
protected:
	short int registers[4];
	char* RAM;
public:
	StorageUnit();
	bool storeInMemory(int index, short int data);
	bool storeInRegisters(int index, short int data);
	char getFromMemory(int index);
	short int  getFromRegisters(int index);
};