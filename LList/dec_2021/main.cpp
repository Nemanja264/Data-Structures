//Proba commita
#include "LList.h"

int main()
{
	LList *list = new LList();
	
	list->addToHead(6);
	list->addToHead(444);
	list->addToHead(444);
	list->addToHead(2);
	list->addToHead(1);

	list->printAll();

	list->fillMissingItems();
	list->printAll();

	delete list;
	return 0;
}
