#include"ChainedScatterTable.h"

void main()
{
	ChainedScatterTable tablica(64);
	//TODO: dodati testiranje tablice prema zahtevu zadatka

	ChainedScatterObject student1("1306998765432", "John", "Smith", 7.8);
	ChainedScatterObject student2("2804923456789", "Emily", "Johnson", 8.8);
	ChainedScatterObject student3("1712861234567", "Michael", "Davis", 6.4);
	ChainedScatterObject student4("0510909876543", "Sarah", "Brown", 9.25);
	ChainedScatterObject student5("1103992345678", "Christopher", "Wilson", 10);
	ChainedScatterObject student6("0405947654321", "Jessica", "Martinez", 8.65);
	ChainedScatterObject student7("0405947654321", "Jessica", "Martinez", 8.65);

	try {
		tablica.insert(student1);
		tablica.insert(student2);
		tablica.insert(student3);
		tablica.insert(student4);
		tablica.insert(student6);
		tablica.insert(student5);
		tablica.insert(student7);

		tablica.print();

		bool upisano = tablica.Duplicate(student7);
		cout << endl << upisano << endl;
	}
	catch (char* exp) {
		cout << endl << exp << endl;
	}
}
