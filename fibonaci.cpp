// fibonacci.cpp
// 14.10.2012
// Vypocet Fibonacciho posloupnosti pomoci rekurze

#include <iostream>

using namespace std;

int fib (int n);	// prototyp funkce fib ()

int citac = 0;		// pocita volani rekurze

int main()
{
	int n, odpoved;
	cout << "Vlozte poradi v posloupnosti: ";
	cin >> n;

	cout << "\n\n";

	odpoved = fib (n);

	cout << endl;
	cout << n << ". Fibonacciho cislo";
	cout << " je " << odpoved << "\n\n";
	cout << "Rekurze byla zavolana celkem " << citac << " krat.\n\n";

	system ("pause");
	return 0;
}

int fib (int n)
{
	cout << "Zpracovani fib (" << n << ")... ";
	citac ++;		// +1 to citace volani rekurze
	if (n < 3)
	{
		cout << "Vraceni 1!\n";
		return 1;
	}
	else
	{
		cout << "Volani fib (" << n-2 << ") ";
		cout << "a fib (" << n-1 << ").\n";
		return (fib(n-2) + fib(n-1));
	}
}
