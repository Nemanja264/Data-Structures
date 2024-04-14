#include "LListNode.h"


LListNode::LListNode()
{
	next=NULL;
	info = NULL;
}

LListNode::LListNode(Ucesnik* i) 
{ 
	info = i;
	next=NULL;
}

LListNode::LListNode(Ucesnik* i, LListNode* n)
{
	info = i;
	next = n;
}

void LListNode::print()
{
	cout << info->getRbr() << " " << info->getIme() << " " << info->getPts();
}

bool LListNode::isEqual(Ucesnik* el)
{
	return el == this->info;
}

LListNode::~LListNode()
{
	if (info)
		delete info;
}
