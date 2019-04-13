#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct okreg {
	int x, y, r;
	bool operator>(okreg c) {
		if (this->x == c.x) {
			return this->y > c.y;
	}
		return this->x > c.x;

	}
};
bool czy_styczne(okreg o) {
	return((abs(o.y) - o.r) == 0);
}

void bubble(vector <okreg>& t) {
	for (unsigned int i = 0; i < t.size() - 1; i++)
	{
		for (unsigned int j = 0; j < (t.size() - 1 - i); j++)
		{
			if (t[j] > t[j + 1])
			{
				swap(t[j], t[j + 1]);
			}
		}
	}
}
std::ostream& operator<< (std::ostream& out, okreg p) // TU MOŻNA POPRAWIĆ WYŚWIETLANIE OSOBY
{
	out << p.x << " " << p.y << " " << p.r << endl;
	return out;
}
int main()
{
	ifstream plik("okregi.txt");
	okreg okr;
	vector <okreg> vec;
	while (!plik.eof())
	{
		plik >> okr.x >> okr.y >> okr.r;
		if (czy_styczne(okr)) {
			vec.push_back(okr);
		}
	}
	bubble(vec);
	for (auto it = vec.begin(); it < vec.end(); it++) {
		cout << *it;
	}
	cout << vec.size();
	return 0; 
}

