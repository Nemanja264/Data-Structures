#include "HashObject.h"
#include <string.h>
using namespace std;
HashObject::HashObject()
{
	key = NULL;
	record = NULL;
}

HashObject::HashObject(char* k, int v)
{
	key = new char[strlen(k) + 1];
	strcpy(key, k);
	record = v;
}

HashObject::~HashObject()
{
	if (key)
		delete[] key;
}

HashObject::HashObject(HashObject const& obj)
{
	key = strcpy(new char[strlen(obj.key) + 1], obj.key);
	record = obj.record;
}

HashObject& HashObject::operator = (HashObject const& obj)
{
	if (this != &obj)
	{
		if (key)
			delete key;
		key = new char[strlen(obj.key) + 1];
		strcpy(key, obj.key);
		
		record = obj.record;
	}
	return *this;
}

bool HashObject::operator == (HashObject const& obj)
{
	return (strcmp(this->key, obj.key) == 0) && (record == obj.record);
}

void HashObject::deleteRecord() {
	if (record) { record = 0; }
}

void HashObject::print()
{
	if(key!=NULL)
	{ 
		cout << key;
	}
	if (record != 0)
	{
		cout << "|" << record;
	}
	cout << endl;
}

char* HashObject::getKey()
{
	char* kljuc = new char[8];
	int j = 0;
	for (int i = 12; key[i] != 0; i++)
		kljuc[j++] = key[i];

	return kljuc;
}

bool HashObject::isEqualKey(char* k)
{
	return (strcmp(this->getKey(), k) == 0);
}
