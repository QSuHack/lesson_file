// palindrom_cyfrowy(cpp).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


bool palindrom_cyfrowy(string wyraz_do_zbadania) {
	bool flag = true;
	int suma = (int)wyraz_do_zbadania[0] + (int)wyraz_do_zbadania[wyraz_do_zbadania.length() - 1];
	for (unsigned int i = 1; i < wyraz_do_zbadania.length(); i++) {
		if (i == wyraz_do_zbadania.length() - 1 - i) { break; }
		if ((int)wyraz_do_zbadania[i] + (int)wyraz_do_zbadania[wyraz_do_zbadania.length() - 1 - i] != suma) {
			flag = false;
			break;
		}
		
	}
	return flag;
}


vector<string> wczytaj_plik(string nazwa_pliku) {
	vector <string> nowy;
	string tmp;
	ifstream plik(nazwa_pliku);
	while (!plik.eof()) {
		plik >> tmp;
		if (palindrom_cyfrowy(tmp) == true) {
			nowy.push_back(tmp);
		}
	
		
	}
	return nowy;
}

int main()
{
	ios_base::sync_with_stdio(false);
	vector<string> a = wczytaj_plik("dane1.txt");
	cout << a.size();
	cout << " " << a[4] << "\n";
	a = wczytaj_plik("dane2.txt");
	cout << a.size() << " " << a.at(4) << "\n";
	a = wczytaj_plik("dane3.txt");
	cout << a.size()<< " " << a.at(4) << "\n";
	return 0;
}

