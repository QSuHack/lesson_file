// Liczby5(cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <map>
using namespace std;
int NWD(int a, int b)
{
	while (a != b)
	{
		if (a < b) { b = b - a; }
		else
		{
			a = a - b;
		}
	}
	return a;
}



int main()
{
	ios_base::sync_with_stdio(false);
	ifstream plik("liczby5.txt");
	int x;
	vector <int> liczby;
	while (!plik.eof())
	{
		plik >> x;
		liczby.push_back(x);
	}

	int najwieksza = 0;
	for (auto i = liczby.begin(); i < liczby.end(); i++)
	{
		bool flaga = true;
		for (auto j = liczby.begin(); j < liczby.end(); j++)
		{
			if (i != j && NWD(*i, *j) > 1)
				flaga = false;
		}
		if (flaga && *i > najwieksza)
			najwieksza = *i;
	}
		cout << najwieksza;
		
	return 0;

}
