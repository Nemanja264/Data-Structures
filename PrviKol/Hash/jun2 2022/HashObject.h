#pragma once
#include <iostream>
using namespace std;
class HashObject
{
private:
	char* key;
	char* ime;
	char* prezime;
	double prosek;
	//TODO: Izmeniti/dodati atribute objekta prema zahtevima zadatka
public:
	//TODO: Izmeniti metode objekta prema zahtevima zadatka
	HashObject();
	HashObject(char* k, char* i,char* p,double avg);
	HashObject(HashObject const& obj);
	~HashObject();
	HashObject& operator = (HashObject const& obj);
	bool operator == (HashObject const& obj);
	void deleteRecord();
	char* getKey() { return key; }
	char* getIme() { return ime; }
	char* getPrezime() { return prezime; }
	double getProsek() { return prosek; }
	bool isEqualKey(char* k) { return strcmp(key,k)==0; }
	void print();
};
