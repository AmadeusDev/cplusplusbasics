// typydat.cpp
// 2.10.2012

#include <iostream>
using namespace std;

void DatoveTypy()
{
	cout << "sizeof(long) = " << sizeof(long) << "\n";
	cout << "sizeof(int) = " << sizeof(int) << "\n";
	cout << "sizeof(short) = " << sizeof(short) << "\n";
	cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << "\n";
	cout << "sizeof(char) = " << sizeof(char) << "\n";
	cout << "sizeof(bool) = " << sizeof(bool) << "\n";

	cout << "sizeof(float) = " << sizeof(float) << "\n";
	cout << "sizeof(double) = " << sizeof(double) << "\n";
}
int main ()
{
	cout << "***** Skoleni C/C++ *****\n";
	DatoveTypy();

	system ("pause");
	return 0;
}
