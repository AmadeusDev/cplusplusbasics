// obdelnik.cpp
// 21.9.2012
#include <iostream>
using namespace std;// poznamka

int main ()
{
	float a,b,o;// a,b strany obdelnika
				// o obvod obdelnika
	cout << "Obvod obdelnika\n";
	cout << "zadejte stranu a ";
	cin >> a;
	cout << "\nzadejte stranu b ";
	cin >> b;
	o = 2*(a+b);
	cout << "obvod obdelnika je " << o << "\n\n";
	cout << "velikost float je " << sizeof (float) << " byte\n\n";
	system ("pause");
	return 0;
}