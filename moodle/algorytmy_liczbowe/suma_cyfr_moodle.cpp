#include <iostream>
#include <fstream>
using namespace std;
int SumaCyfr(int l){
int suma =0 ;
while(l!=0){

suma += l %10;
l /= 10;
}
return suma;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int x,max,maxL,a;
	ifstream plik("liczby.txt");
	
plik >> x;
max = SumaCyfr(x);
maxL=x;

	while (!plik.eof())
	{
		plik >> x;
		a = SumaCyfr(x);
		if (a>max){
		    max = a;
		    maxL = x;
		}
	}
cout << maxL;
    return 0;
}
