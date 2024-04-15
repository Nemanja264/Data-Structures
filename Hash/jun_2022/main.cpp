#include"ChainedScatterTable.h"

void main()
{
	ChainedScatterTable tablica(64);
	//TODO: dodati testiranje tablice prema zahtevu zadatka
	ChainedScatterObject s1("19ELFRIOO212", "Baze Podataka");
	ChainedScatterObject s2("13ELFRIOO112", "Baze Podataka");
	ChainedScatterObject s3("19ELFRIOO442", "VIS");
	ChainedScatterObject s4("19ELFRIOO232", "AOR1");
	ChainedScatterObject s5("19ELFRIOO332", "AOR2");

	tablica.insert(s1);
	tablica.insert(s2);
	tablica.insert(s3);
	tablica.insert(s4);
	tablica.insert(s5);
	tablica.print();

	tablica.Delete("19ELFRIOO232");
	bool brisi = tablica.Delete("19ELFRIOO232");
	tablica.print();

	if (brisi)
		cout << endl << "true" << endl;
	else
		cout << endl << "false" << endl;
	
}
