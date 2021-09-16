// nabidka_switch.cpp
// 27.10.2012

// Pou�it� nekone�n� smy�ky
// pro ��zen� interakce s u�ivatelem
// pomoci prikazu switch

#include <iostream>

// prototypy funkc�
int nabidka();
void ProvedUkolJedna();
void ProvedUkoly(int);

using namespace std;

int main()
{
	bool konec = false;

	start:

		int volba = nabidka();
		switch(volba)
		{
		case (1):
			ProvedUkolJedna();
			break;
		case (2):
			ProvedUkoly(2);
			break;
		case (3):
			ProvedUkoly(3);
			break;
		case (4):
//			continue;  // nadbyte�n�!
			break;
		case (5):
			konec=true;
			break;
		default:
			cout << "Prosim vyberte znovu!\n";
			break;
		}          // konec p��kazu switch

		if (konec == true)
			goto pokrac;
		goto start;	// konec nekone�n� smy�ky

pokrac:
		return 0;
}                    // konec funkce main()

int nabidka()		// Definice funkce nab�dka
{
	int volba;
	//system ("cls");
	cout << " **** Nabidka ****\n\n";
	cout << "(1) Volba jedna.\n";
	cout << "(2) Volba dva.\n";
	cout << "(3) Volba tri.\n";
	cout << "(4) Znovuzobrazeni nabidky.\n";
	cout << "(5) Konec.\n\n";
	cout << ": ";
	cin >> volba;
	return volba;
}

void ProvedUkolJedna()	// Definice funkce ProvedUkolJedna
{
	cout << "Ukol jedna!\n";
}

void ProvedUkoly(int ktery)	// Definice funkce ProvedUkoly
{
	if (ktery == 2)
		cout << "Ukol dva!\n";
	else
		cout << "Ukol tri!\n";
}
