// Prestupný rok
// 17.10.2012
#include <iostream>
using namespace std;

bool PrestupnyRok( int Rok);	// prototyp funkce PrestupnyRok

int main()
{
	int rok;					// rok, ktery mame zjistit
	bool priznak;				// priznak pro prestupny rok
								// true - je prestupny, false - neni prestupny
	cout << "Zadejte rok: ";
	cin >> rok;					// nacteni roku do promenne rok
	priznak = PrestupnyRok(rok);// volani funkce PrestupnyRok
	if (priznak == true)		// test priznaku
	{
		cout << "Rok " << rok << " je prestupny.\n";	// vypis textu pro prestupny rok
	}
	else
	{
	cout << "Rok " << rok << " prestupny neni.\n";		// vypis textu pro neprestupny rok
	}

	system ("pause");			// pozastaveni vypoctu
	return 0;					// konec programu
}

bool PrestupnyRok( int Rok)	// deklarace funkce PrestupnyRok
{
	bool Prok = false;
	if ((Rok % 4) == 0)		// rok je delitelny 4
	{
		Prok = true;		// nastaveni priznaku pro prestupny rok
	}
							
	if (( Rok % 100) == 0)	// rok je delitelny 100
	{
		Prok = false;		// rok prestupny neni
	}
	if ((Rok % 400) == 0)	// rok je delitelny 400
		{
		Prok = true;		// rok prestupny je
		}
// rok neni delitelny 4 ani 100 ani 400
// tedy neni prestupny
	return Prok;
}
