#pragma once
#include "HashTable.h"
#include "ChainedScatterObject.h"
class ChainedScatterTable :
	public HashTable
{
protected: 
	ChainedScatterObject* array;
	unsigned int lrmp;
public:
	ChainedScatterTable(unsigned int length);
	~ChainedScatterTable();
	void insert(ChainedScatterObject obj);
	void ubaci(ChainedScatterObject obj); // drugi nacin za insert
	void print();
	ChainedScatterObject find(char* key);


	bool Duplicate(ChainedScatterObject obj); // trazi da li je student vec upisan u tablicu
};

