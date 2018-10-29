#include <iostream>
#include <conio.h>

using namespace std;
int SumaCyfr(int l){
int suma =0 ;
int x;
while(l!=0){

suma += l %10;
l /= 10;
}
return suma;
}
int main()
{
int x;
cout<< "Podaj liczbe";
cin>> x;
cout << SumaCyfr(x);
getch();
    return 0;
}
