// Fibonacci_for.cpp
// 27.10.2012

// Fibonacciho posloupnost iterací pomocí for
#include <iostream>

using namespace std;

unsigned int fib (int n);	// deklarace funkce fib

int main()
{
	int n;
	double f;
	cout << "Zadejte cislo Fibonacciho posloupnosti: ";
	cin >> n;
	// test spravnosti zadani

	f = fib (n);	//volani funkce fib s argumentem cislo
	cout << n << ". cislo Fibonacciho posloupnosti je: " << f << endl << endl;

	system ("pause");
	return 0;
}

unsigned int fib (int n)	// definice funkce fib
{
	unsigned int minus1 = 1, minus2 = 1, odpoved;
	for (int i=3;i <= n; ++i)
	{
		odpoved = minus1 + minus2;
		minus2 = minus1;
		minus1 = odpoved;
	}
	return odpoved;
}
