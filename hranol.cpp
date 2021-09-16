// hranol.cpp
// 5.10.2012
#include <iostream>
// #include <cmath>

using namespace std;

int main()
{
	float a,b,c,v;
	cout <<"Zadej hodnotu strany a ";
	cin >> a;
	cout <<"Zadej hodnotu strany b ";
	cin >> b;
	cout <<"Zadej hodnotu strany c ";
	cin >> c;
	v = a*b*c;
	cout << "\nObjem hranolu je " << v << "\n";

	system ("pause");
	return 0;
}