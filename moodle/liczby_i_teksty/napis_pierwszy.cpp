#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
bool czy_pierwsza(int liczba) {
	if (liczba == 2) {
		return true;
	}
	if (liczba % 2 == 0) {
		return false;
	}
	for (int i = 3; i < sqrt(liczba)+1; i++) {
		if (liczba % i == 0)
		{
			return false;
		}
	}
	return true;

}

bool napis_pierwszy(string napis_do_zbadania) {
	int suma = 0;
	for (char x : napis_do_zbadania) {
		suma += (int)x;
	}
	return (czy_pierwsza(suma));
}

int wczytaj(string nazwa_pliku) {
	ifstream plik(nazwa_pliku);
	string tmp;
	int licznik = 0;
	while (!plik.eof()) {
		plik >> tmp;
		if (napis_pierwszy(tmp)) {
			licznik++;
		}
	}
	return licznik;
}

int main()
{

	cout << wczytaj("napis.txt");
	return 0;
}
