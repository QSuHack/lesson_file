// mniejszeniz100(cpp).cpp: Okre�la punkt wej�cia dla aplikacji konsoli.
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
	while (po != 0)
	{
		plik >> x;
		if (x< 1000)
		{
			po = x;
		}
	}
	while (o!=0){
		plik >> x;
		if( x< 1000){
			o = x;
		}
	}

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
