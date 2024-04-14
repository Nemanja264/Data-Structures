#include"DList.h"

void main()
{
	DList *list = new DList(7);
	
	DListNode* n1 = new DListNode(5, NULL, NULL);
	DListNode* n2 = new DListNode(8, NULL, NULL);
	DListNode* n3 = new DListNode(2, NULL, NULL);
	DListNode* n4 = new DListNode(1, NULL, NULL);
	DListNode* n5 = new DListNode(7, NULL, NULL);
	DListNode* n6 = new DListNode(9, NULL, NULL);
	DListNode* n7 = new DListNode(12, NULL, NULL);
	DListNode* n8 = new DListNode(10, NULL, NULL);

	list->add(n1);
	list->add(n2);
	list->add(n3);
	list->add(n4);
	list->add(n5);
	list->add(n6);
	list->add(n7);
	list->add(n8);

	list->printAll();

	DListNode* getter = list->get(8);
	list->printAll();


	delete list;
}
