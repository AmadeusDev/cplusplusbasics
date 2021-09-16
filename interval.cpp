// interval.cpp
// 5.11.2013
// test hodnoty v intervalu

#include <iostream>
using namespace std;

bool test (int a, int b, int x);

int main()
{
	int a,b,x;	// deklarace promennych
	cout << "*** Test intervalu ***\n\n";
	cout << "Zadejte dolni mez intervalu: ";
	cin >> a;
	cout << "Zadejte horni mez intervalu: ";
	cin >> b;
	cout << "Zadejte testovane cislo: ";
	cin >> x;
	bool t = test (a, b, x);
	if (t == true)
	{
		cout << "cislo " << x << " lezi v intervalu <" << a << "," << b << ">\n";
	}
	else
	{
		cout << "cislo " << x << " nelezi v intervalu <" << a << "," << b << ">\n";
	}
	system ("pause");
	return 0;
}

bool test (int a, int b, int x)
	// a dolni mey intervalu
	// b horni mey intervalu
	// x testovane cislo
{
	bool trt = false;	// hodnota udavajici zda x patri do intervalu
						// na zacatku nastavime, ze cislo nelezi v intervalu
	if (x >= a && x <= b)	// lezi x v intervalu <a,b>
	{
		trt = true;		// ano, lezi
	}
	return trt;			// vratime vzsledek testu
}
