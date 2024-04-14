#pragma once
#include "LListNode.h"
class LList
{
protected:
	LListNode *head, *tail;
public:
	LList();
	~LList();
	bool isEmpty();
	void addToHead(Ucesnik* el);
	void addToTail(Ucesnik* el);
	Ucesnik* deleteFromHead();
	Ucesnik* deleteFromTail();
	LListNode* findNodePtr(Ucesnik* el);
	LListNode* getHead();
	LListNode* getNext(LListNode* ptr);
	Ucesnik* getHeadEl();
	Ucesnik* getNextEl(Ucesnik* el);
	void printAll();
	bool isInList(Ucesnik* el);
	void deleteEl(Ucesnik* el);
	LListNode* removeNodeFromHead();

	void aggregateByValue(int points);
};

