// liczby4(cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;




vector<int> zwroc_dzielniki(int n)
{
	vector <int> dzielniki;
	double sn = fabs(n / 2);
	for (int i = 1; i <= sn; i++)
	{
		if (n % i == 0)
		{
			dzielniki.push_back(i);
		}
	}
	dzielniki.push_back(n);
	return dzielniki;
}


int main()
{
	ios_base::sync_with_stdio(false);
	ifstream plik("liczby4.txt");
	int x;
	while (!plik.eof())
	{
		plik >> x;
		auto a = zwroc_dzielniki(x);
		if (a.size() ==18){
			cout << x<<" ";
			for (auto it=a.begin();it<a.end();it++){
				cout << *it << " ";
			
			}
			cout << "\n";
		}


	}

	return 0;
}

