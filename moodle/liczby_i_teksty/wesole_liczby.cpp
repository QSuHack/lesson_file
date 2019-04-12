#include <iostream>

using namespace std;
int sth(int l) {
	int suma = 0;
	while (l != 0) {

		suma += (l%10) * (l%10);
		l /= 10;
}
	return suma;
}
bool czy_wesola(int a) {
	int x = sth(a);
	while (x > 9) {
		x = sth(x);
	}
	if (x == 1) {
		return true;
	}
	return false;
}
int main()
{
	int liczba;
	std::cin >> liczba;
	if (czy_wesola(liczba)) {
		cout << "TAK";
	}
	else {
		cout << "NIE";
	}
	return 0;
}
