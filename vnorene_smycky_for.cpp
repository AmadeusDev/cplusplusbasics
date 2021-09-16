// Vnorene_smycky_for.cpp
// 27.10.2012
// Ilustruje vnoøené smyèky for
#include <iostream>

int main()
{
	using namespace std;
	int radky, sloupce;
	char znak;
	cout << "Kolik radku? ";
	cin >> radky;
	cout << "Kolik sloupcu? ";
	cin >> sloupce;
	cout << "Jaky znak? ";
	cin >> znak;
	for (int i = 0; i<radky; i++)
	{
		for (int j = 0; j<sloupce; j++)
			cout << znak;
		cout << "\n";
	}
	
	system ("pause");
	return 0;
}
