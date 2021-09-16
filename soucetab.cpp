// soucetab.cpp
// 19.11.2013
// soucet celych cisel od a po b

#include <iostream>

using namespace std;

int main()
{
	cout << "*** Soucet cisel od a po b ***\n\n";
	int a,b,s;
	cout << "Zadejte dolni mez intervalu a: ";
	cin >> a;
	cout << "Zadejte horni mez intervalu b: ";
	cin >> b;
	if (a > b)
	{
		int tmp = a;
		a=b;
		b=tmp;
	}
	s=a;
	for (int i=a+1; i<=b; i++)
	{
		s+=i;
	}
	cout << "Soucet cisel od " << a
		<< " po " << b << " je: "
		<< s << endl << endl;

	system ("pause");
	return 0;
}