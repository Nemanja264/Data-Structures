#pragma once
#include <iostream>
#include "Ucesnik.h"
using namespace std;

class LListNode
{
public:
	Ucesnik* info;
	LListNode *next;
	LListNode();
	LListNode(Ucesnik* i);
	LListNode(Ucesnik* i, LListNode* n);
	void print();
	bool isEqual(Ucesnik* el);
	~LListNode();
};

