#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class HashObject
{
private:
	char* key;
	int record;
public:
	HashObject();
	HashObject(char* k, int v);
	HashObject(HashObject const& obj);
	~HashObject();
	HashObject& operator = (HashObject const& obj);
	bool operator == (HashObject const& obj);
	void deleteRecord();
	char* getKey();
	int getRecord() { return record; }
	bool isEqualKey(char* k);
	void print();
};
