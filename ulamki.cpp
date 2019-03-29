#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ifstream dane("dane_ulamki.txt");
    double x,y;
    vector <double> a;
    vector <int> b ,c ;
   while (!dane.eof()){
    dane >>x >> y;
    a.push_back ( x/y);
    b.push_back(x);
    c.push_back(y);
   }
   int minimum = *(a.begin());
   int licznik1 =0;
   int licznik2 =0;
   for(auto itx=a.begin(); itx < a.end();itx++){
    if (*itx < minimum){
        minimum = *itx;
        licznik1 = licznik2;
    }
    licznik2++;
   }
cout << *(a.begin()+licznik2) << " " <<*(b.begin()+licznik2)<< " " <<*(c.begin()+licznik2);
getch();
    return 0;
}
