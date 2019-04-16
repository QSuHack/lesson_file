// liczba_p-podobna(moodle)(cpp).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int suma_cyfr(int liczba) {
	int suma = 0;
	while (liczba != 0) {
		suma += liczba % 10;
		liczba /= 10;
	}
	return suma;
}

int inny_system(int n, int podstawa) {
	string tab = "";
	while (n > 0) {
		tab = (char)(n % podstawa + '0') + tab;
		n /= podstawa;
	}
	return std::stoi(tab);

}

bool sprawdz_czy_podobna(int n, int p) {
	if (p == 10) { return true; }
	if (suma_cyfr(n) == suma_cyfr(inny_system(n, p))) {
		return true;
	}
	return false;
}
int main()
{
	int liczba, podobna;
	cin >> liczba >> podobna;
	if (sprawdz_czy_podobna(liczba, podobna)) {
		cout << "TAK";
	}
	else {
		cout << "NIE";
	}

	return 0;
}
