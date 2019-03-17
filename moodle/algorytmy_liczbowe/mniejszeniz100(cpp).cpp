// mniejszeniz100(cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int x;
	int licznik = 0;
	int o = 0;
	int po = 0;
	ifstream plik("liczby3.txt");
	while (!plik.eof())
	{
		plik >> x;
		if (x <1000){
			po = o;
			o = x;
			licznik++;
		}
		
	}
	cout << licznik << " " << po << " " << o; 
	return 0;

}
