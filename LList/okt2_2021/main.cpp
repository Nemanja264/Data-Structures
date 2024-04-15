//Proba commita
#include "LList.h"

int main()
{
	LList *list = new LList();
	list->addToHead(6);
	list->addToHead(3);
	list->addToHead(2);
	list->addToHead(7);
	list->addToHead(1);
	list->addToHead(9);
	list->addToHead(4);
	
	list->printAll();

	list->deleteFrom(6, 4);
	list->printAll();

	delete list;
	return 0;
}
