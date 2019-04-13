#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
vector <int> fibbonacii = { 0, 1, 1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733, };

bool sprawdz(int liczba) {
	for (auto x : fibbonacii) {
		if (x == liczba) {
			return true;
		}
		if (x > liczba) {
			return false;
		}
	}
	return false;


}

void generuj()
{
	// wygenerujmy wcześniej wszystkie liczby mniejsze od miliarda i wpiszmy na stałe by zwiększyć wydajność
	int f = 0; int f1 = 1; int f2 = 0;
	cout << f << endl << f1 << endl;
	while (f2 < 1000000000) {
		f2 = f + f1;
		f = f1;
		f1 = f2;
		cout << f2 << endl;
	}
}
int main() {
	
	ifstream plik("dane.txt");
	int tmp;
	while (!plik.eof()) {
		plik >> tmp;
		if (sprawdz(tmp)) {
			cout << tmp << "\n";
		}
	}
	return 0;
}
