#pragma once
#include "ScatterObject.h"
class ChainedScatterObject :
	public ScatterObject
{
public:
	unsigned int next;
public:
	//TODO: Izmeniti metode objekta prema zahtevima zadatka
	ChainedScatterObject() : ScatterObject() { next = -1; }
	ChainedScatterObject(char *k, char *i,char* p, double avg): ScatterObject(k, i, p, avg) { next = -1; }
	ChainedScatterObject(char *k, char* i, char* p, double avg, unsigned int n) : ScatterObject(k, i, p, avg) { next = n; }
	ChainedScatterObject(ChainedScatterObject const& obj);
	ChainedScatterObject& operator = (ChainedScatterObject const& obj);
	void print();
};

