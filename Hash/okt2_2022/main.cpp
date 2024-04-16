#include"OpenScatterTable.h"

void main()
{
	OpenScatterTable tablica(64);
	ScatterObject o("11.03.2024. 12.22.34", 123);
	tablica.insert(o);
	
	ScatterObject o1("11.03.2024. 13.42.34", 321);
	ScatterObject o2("11.03.2024. 20.52.44", 444);

	tablica.insert(o2);
	tablica.insert(o1);
	tablica.insert(o1);
	tablica.print();


	ScatterObject p = tablica.find("20.52.44");
	p.print();

}
