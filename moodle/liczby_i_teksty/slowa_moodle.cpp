
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
vector <int> oblicz(string nazwa_pliku) {
	ifstream plik(nazwa_pliku);
	vector<int> liczba_slow(12, 0);
	string tmp;
	while (!plik.eof())
	{
		plik >> tmp;
		liczba_slow.at(tmp.length()-1) += 1;
	}
	return liczba_slow;
}

int main()
{
	auto a = oblicz("slowa.txt");
	for (int n = 1; n <= 12;n++) {
		cout << n << " " << a.at(n - 1) << "\n";
	}
	return 0;
}
