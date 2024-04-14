//Proba commita
#include "LList.h"

int main()
{
	LList *list = new LList();

	int i = 1;
	Ucesnik u1(8, "Marko", 22);
	Ucesnik u2(i++, "Lena", 24);
	Ucesnik u3(4, "Lana", 22);
	Ucesnik u4(i++, "Dusan", 22);
	Ucesnik u5(i++, "Luka", 80);
	Ucesnik u6(i++, "Marta", 22);
	Ucesnik u7(i++, "Stevan", 64);
	Ucesnik u8(i++, "Uros", 28);
	Ucesnik u9(i++, "Lazar", 48);
	Ucesnik u10(i++, "Nemanja", 94);
	Ucesnik u11(i++, "Milan", 74);

	list->addToHead(&u1);
	list->addToHead(&u2);
	list->addToHead(&u3);
	list->addToHead(&u4);
	list->addToHead(&u5);
	list->addToHead(&u6);
	list->addToHead(&u7);
	list->addToHead(&u8);
	list->addToHead(&u9);
	list->addToHead(&u10);
	list->addToHead(&u11);
	
	list->printAll();

	list->aggregateByValue(22);
	list->printAll();

	try
	{
		list->aggregateByValue(88);
	}
	catch (char* exp)
	{
		cout << exp << endl;
	}


	//delete list;
	return 0;
}
