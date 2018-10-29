

#include <conio.h>
#include <iostream>
#include <string>

using namespace std;
string tekst;
int klucz;
string szyfruj(string tekst, int klucz) {
	string zaszyfrowane;
	klucz %= 26;
	for (char i : tekst) {
		int k = int(i);
		if (k <= (122 - klucz)) {
			zaszyfrowane +=char( k + klucz);
		}
		else {
			zaszyfrowane += char(k - 26 + klucz);
		}
	}
	return zaszyfrowane;
}
string deszyfruj(string tekst, int klucz) {
	string zdeszyfrowane;
	for (char i : tekst) {
		int k = int(i);
		if (k >= (97+ klucz)) {
			zdeszyfrowane += char(k - klucz);
		}
		else {
			zdeszyfrowane += char(k + 26 - klucz);
		}
	}
	return zdeszyfrowane;
}
void inout() {
	cout << "Podaj tekst: ";
    cin >> tekst;
	cout << "Podaj klucz: ";
	cin >> klucz;
}
int main()
{

	char tryb;
	cout << "Wybierz tryb: szyfrowanie(s) lub deszyfrowanie(d) ";
	cin >> tryb;
	switch (tryb)
	{
	case 's':
			inout();
			cout<<szyfruj(tekst,klucz);
		break;
	case 'd':
		inout();
		cout <<
			deszyfruj(tekst,klucz);
		break;
	default:
		cout << "Bledna opcja!";
		break;
	}
	getch();
    return 0;
}
