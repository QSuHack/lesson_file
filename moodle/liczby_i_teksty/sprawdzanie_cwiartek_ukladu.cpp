#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int cw1 = 0;
int cw2 = 0;
int cw3 = 0;
int cw4 = 0;

struct Punkt {
	float x, y;
	void sprawdz() {
		if (this->x > 0 && this->y > 0) {
			cw1++;
			return;
		}
		if (this->x > 0) {
			cw4++;
			return;
		}
		if (this->y > 0) {
			cw2++;
			return;
		}
		else {
			cw3++;
			return;
		}
	
	}
};

int main()
{
	ifstream plik("punkty.txt");
	Punkt a;
	while (!plik.eof()) {
		plik >> a.x >> a.y;
		a.sprawdz();
	}
	cout << cw1 << " " << cw2 << " " << cw3 << " " << cw4;
	return 0;
}
