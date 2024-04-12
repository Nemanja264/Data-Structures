#include "ChainedScatterObject.h"

//TODO: Izmeniti metode objekta prema zahtevima zadatka
ChainedScatterObject::ChainedScatterObject(ChainedScatterObject const& obj): ScatterObject(obj)
{
	next = obj.next;
}

ChainedScatterObject& ChainedScatterObject::operator = (ChainedScatterObject const& obj)
{
	if (this != &obj)
	{
		(ScatterObject&)(*this) = obj;
		next = obj.next;
	}
	return *this;
}

void ChainedScatterObject::print()
{
	if (getKey() != NULL)
	{
		cout << getKey();
	}
	if (getIme() != NULL)
	{
		cout << "|" << getIme();
	}
	if (getPrezime() != NULL)
	{
		cout << "|" << getPrezime();
	}
	cout << "|" << getProsek();
	cout << "|" << next << endl;
}
