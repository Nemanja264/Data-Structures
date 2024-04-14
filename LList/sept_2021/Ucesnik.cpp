#include "Ucesnik.h"
#include <iostream>

Ucesnik::Ucesnik()
{
	rbr = 0;
	points = 0;
	ime = NULL;
}

Ucesnik::Ucesnik(int broj, char* i, int pts)
{
	rbr = broj;
	points = pts;
	ime = new char[strlen(i) + 1];
	strcpy(ime, i);
}

Ucesnik::~Ucesnik()
{
	if (ime)
	{
		delete[] ime;
		ime = NULL;
	}
}

bool Ucesnik::operator==(Ucesnik const& u)
{
	return (strcmp(ime, u.ime) == 0) && (rbr == rbr) && (points == points);
}

bool Ucesnik::operator!=(Ucesnik const& u)
{
	return (strcmp(ime, u.ime) != 0) || (rbr != rbr) || (points != points);
}

Ucesnik& Ucesnik::operator=(Ucesnik const& u)
{
	if (this != &u)
	{
		if (ime)
		{
			delete[] ime;
			ime = NULL;
		}
		this->rbr = u.rbr;
		this->points = u.points;
		this->ime = new char[strlen(u.ime) + 1];
		strcpy(this->ime, u.ime);
	}

	return *this;
}

