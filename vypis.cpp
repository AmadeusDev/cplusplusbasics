// Výpis switch
// Ukázka pøíkazu switch
// 16.10.2012

#include <iostream>
using namespace std;

int main()
{
	unsigned short int cislo;
	cout << "Vlozte cislo mezi 1 a 5: ";
	cin >> cislo;
	switch (cislo)
	{
	case 0:		cout << "Prilis male!";
				break;
	case 5:		cout << "Dobra prace!\n";  // spada do rozmezi
	case 4:		cout << "Hezka volba!\n";  // spada do rozmezi
	case 3:		cout << "Vynikajici!\n";   // spada do rozmezi
	case 2:		cout << "Skvele!\n";       // spada do rozmezi
	case 1:		cout << "Neuveritelne!\n";
				break;
	default:	cout << "Prilis velke!\n";
				break;
	}
	cout << "\n\n";

	system ("pause");
	return 0;
}
