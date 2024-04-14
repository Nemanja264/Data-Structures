#include "LList.h"


LList::LList()
{
	head=NULL;
}


LList::~LList()
{
	while(!isEmpty())
	{
		Ucesnik* tmp = deleteFromHead();
		delete tmp;
	}
}


bool LList::isEmpty()
{
	return head==NULL;
}

void LList::addToHead(Ucesnik* el)
{
	head = new LListNode(el, head);
}

void LList::addToTail(Ucesnik* el)
{
	if(!isEmpty())
	{
		LListNode* tmp = head;
		while(tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new LListNode(el);
	}
	else
		addToHead(el);
}

Ucesnik* LList::deleteFromHead()
{
	if(isEmpty())
		throw new exception("List is empty");
	Ucesnik* el = head->info;
	LListNode *tmp = head;
	head = head->next;
	delete tmp;
	return el;
}

Ucesnik* LList::deleteFromTail()
{
	if(isEmpty())
		throw new exception("List is empty");
	Ucesnik* el;
	if (head->next == NULL)
	{
		el = head->info;
		delete head;
		head = NULL;
	}
	else
	{
		LListNode* prev = head;
		LListNode *tmp = head;
		while (tmp->next != NULL)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		el = tmp->info;
		delete tmp;
		prev->next = NULL;
	}
	return el;
}

LListNode* LList::findNodePtr(Ucesnik* el)
{
	if(isEmpty())
		throw new exception("List is empty");
	LListNode *ret = head;
	while(ret!=NULL && ret->info!=el)
	{
		ret = ret->next;
	}
	return ret;
}

LListNode* LList::getHead()
{
	return head;
}

LListNode* LList::getNext(LListNode* ptr)
{
	if(isEmpty())
		throw new exception("List is empty");
	return ptr->next;
}

Ucesnik* LList::getHeadEl()
{
	if(isEmpty())
		throw new exception("List is empty");
	return head->info;
}

Ucesnik* LList::getNextEl(Ucesnik* el)
{
	if(isEmpty())
		throw new exception("List is empty");
	LListNode* tmp = findNodePtr(el);
	if(tmp==NULL)
		throw new exception("Node doesn't exist");
	if(tmp->next == NULL)
		throw new exception("Element doesn't have next node");
	return tmp->next->info;
}

void LList::printAll()
{
	LListNode *tmp = head;
	while(tmp!=NULL)
	{
		tmp->print();
		cout << " | ";
		tmp=tmp->next;
	}
	cout << endl;
}

bool LList::isInList(Ucesnik* el)
{
	if(isEmpty())
		return false;
	LListNode* tmp = findNodePtr(el);
	if(tmp==NULL)
		return false;
	else
		return true;
}

void LList::deleteEl(Ucesnik* el)
{
	if (!isEmpty())
	if (head->isEqual(el)) 
	{
		LListNode *tmp = head;
		head = head->next;
		delete tmp;
	}
	else 
	{
		LListNode *pred, *tmp; 
		for (pred = head, tmp = head->next; tmp != NULL && !(tmp->isEqual(el));
			  pred = pred->next, tmp = tmp->next);
		if (tmp != NULL) 
		{
			pred->next = tmp->next;
			delete tmp;
		}
    }
}

LListNode* LList::removeNodeFromHead()
{
	if(isEmpty())
		return NULL;
	LListNode *tmp = head;
	head = head->next;
	return tmp;
}

void LList::aggregateByValue(int points)
{
	if (isEmpty())
		throw ("Prazna lista!");

	LListNode* tmp = head;

	while (tmp->info->getPts() != points && tmp != NULL)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL)
		throw ("Ne postoji takav igrac!");

	if (tmp->next == NULL)
		throw ("Nadjen, ali na poslednjem mestu!");

	LListNode* prvi = tmp;
	LListNode* pprev = tmp;
	tmp = tmp->next;
	

	if (tmp->info->getPts() == points)
	{
		pprev = tmp;
		tmp = tmp->next;
	}
	
	while (tmp != NULL)
	{
		
		if (tmp->info->getPts() == points)
		{
			
			LListNode* sledeci = tmp;
			pprev->next = tmp->next;
			tmp = tmp->next;

			LListNode* mesto = prvi->next;
			LListNode* prev = prvi;
			while (mesto->info->getPts() == points && mesto->info->getRbr() <= sledeci->info->getRbr())
			{
				prev = mesto;
				mesto = mesto->next;
			}
			prev->next = sledeci;
			sledeci->next = mesto;
			
		}
		else
		{
			pprev = tmp;
			tmp = tmp->next;
		}
		

	}
}
