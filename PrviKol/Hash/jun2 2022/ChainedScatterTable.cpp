#include "ChainedScatterTable.h"

ChainedScatterTable::ChainedScatterTable(unsigned int length)
{
	m = length;
	count = 0;
	lrmp = m;
	array = new ChainedScatterObject[2*m];
	for (int i = m; i < 2 * m - 1; i++)
	{
		array[i].next = i + 1;
	}
	array[2 * m - 1].next = 0;
}


ChainedScatterTable::~ChainedScatterTable()
{
	delete[] array;
}

void ChainedScatterTable::insert(ChainedScatterObject obj)
{
	if (count == m)
		throw new exception("Tablica je puna!");
	unsigned int probe = h(obj.getKey());
	if (array[probe].status == 2)
	{
		while (array[probe].status == 2 && array[probe].next != -1 && array[probe].next != 0)
		{
			if (array[probe] == obj)
			{
				cout << "Duplikat!" << endl;
				return;
			}
			else
				probe = array[probe].next;
		}
		if (array[probe].next == 0)
			throw new exception("Izdvojeni prostor za sinonime je pun!");

		array[probe].next = lrmp;
		probe = lrmp;
		lrmp = array[probe].next;
	}
	
	
	array[probe] = obj;
	array[probe].status = 2; // zauzet
	array[probe].next = -1;
	count++;
}

void ChainedScatterTable::print()
{
	for (unsigned int i = 0; i < 2 * m; i++)
	{
		if (i == m)
			cout << "---------------------------------------" <<endl;
		cout << i << " ";
		array[i].print();
	}
}

ChainedScatterObject ChainedScatterTable::find(char* key)
{
	unsigned int probe = h(key);
	while (probe != -1)
	{
		if (!array[probe].isEqualKey(key))
			probe = array[probe].next;
		else
			return array[probe];
	}
	return ChainedScatterObject();
}

bool ChainedScatterTable::Duplicate(ChainedScatterObject obj) // da li je vec upisan student
{
	if (count == 0)
		return false;

	unsigned int probe = h(obj.getKey());
	if (array[probe].status == 2 || array[probe].status == 1) 
	{
		while (array[probe].next != -1 && array[probe].next != 0) 
		{
			if (array[probe] == obj)
				return true; // nadjen taj student // upisan je vec

			probe = array[probe].next;
		}
	}

	return false;
}

void ChainedScatterTable::ubaci(ChainedScatterObject obj) // drugi nacin insert fje
{
	if (count == m)
		throw new exception("Tablica je puna!");
	unsigned int probe = h(obj.getKey());

	if (Duplicate(obj))
		throw new exception("Duplikat!"); // vec postoji taj student u tablici

	if (array[probe].status == 2)
	{
		while (array[probe].status == 2 && array[probe].next != -1 && array[probe].next != 0)
		{
				probe = array[probe].next;
		}
		if (array[probe].next == 0)
			throw new exception("Izdvojeni prostor za sinonime je pun!");

		array[probe].next = lrmp;
		probe = lrmp;
		lrmp = array[probe].next;
	}


	array[probe] = obj;
	array[probe].status = 2; // zauzet
	array[probe].next = -1;
	count++;
}
