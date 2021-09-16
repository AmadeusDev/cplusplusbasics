// hadani.cpp
// 17.10.2012
// Program na hadani cisel ze souvisleho intevalu

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int dolni;					// dolni mez intervalu
int horni;					// horni mez intervalu
int tip;					// tip uzivatele 
int cislo;					// cislo, ktere je treba uhodnout
int pokus = 0;				// pocitadlo pokusu

int main()
{
// zadavani vstupnich udaju
start:
	cout << "Program na hadani celych cisel z nejakeho souvisleho intervalu\n";
	cout << "Pocitac si mysli cislo a vy ho mate uhodnout\n";
	
	cout << "Zadejte dolni mez intevalu: ";
	cin >> dolni;
	cout << "Zadejte horni mez intevalu: ";
	cin >> horni;
	// test spravnosti intervalu
	if (horni == dolni)
	{
		cout << "Spatne zadane hranice intervalu\n";
		cout << "Dolni mez musi byt mensi jako horni mez\n";
		cout << "Zadejte znovu\n";
		goto start;
	}
	else
	{
		if (dolni > horni)	// pokud je dolni mez vetsi jako horni
		{
			tip = dolni;	// tak je prehodime
			dolni = horni;
			horni = tip;
		}
	}
	srand((unsigned) time (NULL));	// nastaveni generatoru nahodnych cisel od casu
	
		// hada clovek
		cout << "Myslim si cislo od " << dolni << " do " << horni << "\n";
		cout << "Zkuste ho uhodnout.\n";
		cislo = rand() % (horni-dolni)+dolni;		// vygeneruj cislo
		//cout << cislo;
skok:
		{
			cout << "Vas tip? ";
			cin >> tip;						// precti tip cloveka
			pokus +=1;						// pripocti 1 do poctu pokusu
			if (tip > cislo)				// jestli je tip > jak cislo
			{
				cout << "Zkuste min\n";		// tak byste meli ubrat
				goto skok;
			}
			else
			{
				if (tip < cislo)			// pokud je tip < jak cislo
				{
					cout << "Zkuste vic\n";	// meli byste pridat
					goto skok;
				}
			}
		}
		// do te doby, dokud neuhodnete tip ==cislo
		// vypis poctu pouzitych pokusu
		cout << "Spravne, uhodli jste na " << pokus << ". pokus\n";
	
system ("pause");
return 0;
}