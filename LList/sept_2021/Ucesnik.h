#pragma once
#include <iostream>

class Ucesnik
{
private:
	int rbr;
	char* ime;
	int points;
public:
	Ucesnik();
	Ucesnik(int broj, char* i, int pts);
	~Ucesnik();

	int getRbr() { return rbr; }
	int getPts() { return points; }
	char* getIme() { return ime; }

	bool operator==(Ucesnik const& u);
	bool operator!=(Ucesnik const& u);
	Ucesnik& operator=(Ucesnik const& u);
};
