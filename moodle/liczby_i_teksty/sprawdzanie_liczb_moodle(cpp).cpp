// sprawdzanie_liczb_moodle(cpp).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
bool licz(string napis) {
	int zero = 0; int jeden = 0;
	for (char ch : napis) {
		if (ch == '0') {
			zero++;
		}
		if (ch == '1') {
			jeden++;
		}

	}
	return (zero > jeden);
}

int main()
{
	int licznik = 0;
	int licznik2 = 0;
	int licznik8 = 0;
	string tmp;
	ifstream plik("liczby.txt");

	while (!plik.eof()) {
		plik >> tmp;
		if (licz(tmp)) {
			licznik++;
		}
		if (tmp[tmp.length() - 1] == '0') {
			licznik2++;
		}
		if (tmp.length() > 3) {
			if (stoi(tmp.substr(tmp.length() - 3, tmp.length() - 1)) % 8 == 0) {
				licznik8++;
			}
		}
		else {
			if (stoi(tmp) % 8 == 0) {
				licznik8++;
			}
		}
	}
	cout << licznik << " " << licznik2 << " " << licznik8;
	return 0;
}
