// metoda bisekcji (cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <conio.h>
float f(float x){
	return x*x*x - x + 1;
}
int bisekcja(float a,float  b, double epsylion){
if (f((a+b)/2 ) == 0){
	return (a + b) / 2;
}
else{
	while (fabs(a - b) > epsylion)
	{
		if (f((a + b) / 2) == 0) { return (a + b) / 2; }
		if (f((a + b) / 2)*f(a) < 0)
		{
			b = (a + b) / 2;
		}
		else{
			a = (a + b) / 2;
		}
	}
	return (a + b) / 2;
}
}
int main()
{
	std::cout << bisekcja(-2, 2, 0.000001);
	_getch();
    return 0;
}

