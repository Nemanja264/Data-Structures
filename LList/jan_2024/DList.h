#pragma once
#include"DListNode.h"
class DList
{
protected:
	DListNode *head;
	int maxCnt;
	int brel;
public:
	DList();
	DList(int max);
	~DList();
	bool isEmpty() { return head == NULL; }
	void printAll();
	DListNode* findNodePtr(int el);
	DListNode* getHead() { return head; }
	int getHeadEl();
	int getNextEl(int el);
	int getPreviousEl(int el);
	bool isInList(int el);
	void deleteEl(int el);
	void addToHead(int el);
	void addToTail(int el);
	int deleteFromHead();
	int deleteFromTail();
	void insertSorted(int el);

	// januar 2024
	void add(DListNode* dn);
	DListNode* get(int info);
	bool isFull() { return maxCnt == brel; }
};

