// faktorial_for.cpp
// 27.10.2012

#include <iostream>

using namespace std;

double Faktorial (unsigned n)
{
	double tmp = 1;
	for ( unsigned i=2; i <= n ;++i )	// pocitadlo by melo mit stejny typ jako vyraz se kterym porovnavam
	{
		tmp *= i;	// pouziti unsigned operatoru => tmp = tmp * i pro unsigned typ
	}
//	for ( ; n > 1 ;--n )	alternativa k predchazejicimu cyklu for
//	{						pocitame smerem dolu
//	tmp *= n;	pouziti unsigned operatoru
//	}
	return tmp;
}

int main()
{
	cout << "Zadejte cislo n pro faktorial: ";
	unsigned n;
	double f = 0;
	cin >> n;
	f = Faktorial (n);
	// cout.width (5);
	cout << "Faktorial cisla " << n << " je " << unsigned long int(f) << endl << endl;

	system ("pause");
	return 0;
}