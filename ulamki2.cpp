#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;
bool mniejsza(int a, int b, int c ,int d){
return a*d < b*c;
}
bool rowny(int a, int b, int c, int d){
return a*d == b*c;
}

int main()
{
    ifstream dane("dane_ulamki.txt");
int x , y ;
    vector <int> b ,c ;
    int minimum1=0;
    int minimum2=0;
    dane >>minimum1 >>minimum2;
   while (!dane.eof()){
    dane >>x >> y;
    if mniejszy(x,y,minimum1,minimum2){
        minimum1=x;
        minimum2=y;
    }


   }

getch();
    return 0;
}
