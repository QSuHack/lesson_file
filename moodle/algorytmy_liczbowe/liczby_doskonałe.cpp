// Liczby_doskonałe(cpp).cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	long long x = 1, suma;
	for (long long i = 6; i< 90000000; i++)
	{
		x = 2;
		suma = 1;
		int n = sqrt(i);
		while (x<=n)
		{
			if (i%x == 0)
			{
				suma += x;
				suma += (i / x);
				
			}
			x++;	
		}
		if(n*n==i){
			suma -= n;
		}
		if (suma == i)
		{
			cout <<"Doskonała to: " <<i << "\n"<< " ";
		}
	}
	_getch();
	return 0;
}
