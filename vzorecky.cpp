// vzorecky.cpp
// 2.10.2012

#include <iostream>
#include <cmath>

using namespace std;

#define MIN(a,b)	(a < b ? a: b)

// #define pi 3.14 pro starsi cecko

const double pi = 3.14;
// const double pi = 2*acos(0);

double ObvodObdelnika( double a, double b)
{
		return 2.0*(a+b);
}

double ObvodKruhu( double r )
{
		return 2.0*pi*r;
}

double DelkaPrepony( double a, double b)
{
	const double c = sqrt(a*a + b*b);
		return c;
}

double Koren1( double a, double b, double c )
{
	const double d= b*b - 4*a*c;
	return (-b + sqrt(d))/(2*a);
}

double Koren2( double a, double b, double c )
{
	const double d= b*b - 4*a*c;
	return (-b - sqrt(d))/(2*a);
}

int main()
{
	cout << "***** Vzorecky *****\n";

	cout << "ObvodObdelnika(30,40) = " << ObvodObdelnika(30,40) << "\n";  //140
	cout << "ObvodKruhu(50) = " << ObvodKruhu(50) << "\n";  //314
	cout << "DelkaPrepony(60,80) = " << DelkaPrepony(60,80) << "\n";  //100

	cout << "Koren1(2,3,-4) = " << Koren1(2,3,-4) << "\n"; // ??
	cout << "Koren2(2,3,-4) = " << Koren2(2,3,-4) << "\n"; // ??

	cout << "MIN (3,4) = " << MIN(3,4) << "\n";
	
	system ("pause");
	return 0;
}
