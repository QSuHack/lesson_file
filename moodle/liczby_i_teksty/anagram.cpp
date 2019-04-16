// anagram_moodle(cpp).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool anagram(string* wiersz) {
	string tmp_word, tmp_word2;
	tmp_word = *wiersz;
	for (int i = 1; i < 5; i++) {
		if (wiersz->length() != (wiersz + i)->length()) {
			return false;
		}
		tmp_word2 = *(wiersz + i);
		sort(tmp_word.begin(), tmp_word.end());
		sort(tmp_word2.begin(), tmp_word2.end());
		if (tmp_word != tmp_word2) {
			return false;
		}
	}
	return true;
}

vector<string> wczytaj_plik() {
	ifstream plik("anagram.txt");
	string* tmp;
	tmp = new string[5];
	vector <string> wynik;
	while (!plik.eof()) {
		plik >> *tmp >> *(tmp + 1) >> *(tmp + 2) >> *(tmp + 3) >> *(tmp + 4);
		if (anagram(tmp)) {
			for (int i = 0; i < 5; i++) {
				wynik.push_back(*(tmp + i));
			}
		}
	}
	delete[] tmp;
	return wynik;
}

int main()
{
	auto a = wczytaj_plik();
	int i = 1;
	for (vector <string>::iterator it = a.begin(); it < a.end(); it++) {
		cout << *it;
		if (i % 5 == 0) {
			cout << endl;
		}
		else { cout << " "; }
		i++;
	}
	return 0;
}
