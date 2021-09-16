// rekurzivni algoritmy
// 9.11.2010

#include <iostream>
using namespace std;

unsigned int SoucetRady( unsigned n)
{
	return n <2 ? n :n+SoucetRady(n-1);
}

double Faktorial( unsigned n)
{
	return n<2 ? 1.0: n * Faktorial(n-1);
}

unsigned int Fibonacci( unsigned n)
{
	return n < 2 ? n :Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
	cout << "SoucetRady(0) = " << SoucetRady(0) << "\n";		// 0
	cout << "SoucetRady(1) = " << SoucetRady(1) << "\n";		// 1
	cout << "SoucetRady(100) = " << SoucetRady(100) << "\n";	// 5050

	cout << "Faktorial(0) = " << Faktorial(0) << "\n";		// 1
	cout << "Faktorial(1) = " << Faktorial(1) << "\n";		// 1
	cout << "Faktorial(8) = " << Faktorial(8) << "\n";		// 40320
	cout << "Fibonacci(8) = " << Fibonacci(8) << "\n";		// 21
	cout << "Fibonacci(42) = " << Fibonacci(42) << "\n";	// 267 914 296
	
	system ("pause");
	return 0;
}