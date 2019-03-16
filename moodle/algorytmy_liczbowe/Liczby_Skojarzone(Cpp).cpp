// Liczby_Skojarzone(Cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <conio.h>
using namespace std;



int zlicz(vector<int> a) {
	int suma = 0;
for (auto x : a){
	suma += x;
}
return suma;
}

vector<int> zwroc_dzielniki(int n){
	vector <int> dzielniki;
	double sn = fabs(n / 2);
	for (int i = 1; i <= sn; i++)
	{
		if (n % i == 0)
		{
			dzielniki.push_back(i);
		}
	}
	return dzielniki;
}

bool czy_skojarzone(int a, int b){
	int s1 = zlicz(zwroc_dzielniki(a));
	int s2 = zlicz( zwroc_dzielniki(b));
	if (s1 == b+1 && s2 ==a+1){
		return true;
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);

	int x, y = 0;
	cin >> x >> y;
	if (czy_skojarzone(x,y)){
		cout << "TAK";
	}
	else{
		cout << "NIE";
	}
	_getch();
    return 0;
}

