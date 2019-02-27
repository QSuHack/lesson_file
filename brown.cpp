#include <iostream>
#include <conio.h>
#include <fstream>
#include <random>
#include <cmath>
#include <cstdio>
#define M_PI 3.14159265358979323846
using namespace std;

int main()
{
ofstream plikwyj("brown.xls");
double x =0;
double y = 0;
double alfa;
int n;
cin >> n;
plikwyj<<x<<"\t"<<y<<endl;
for (int i =0; i < n; i++){
//x += cos alfa
// y += sin alfa
alfa= (double)rand()/(RAND_MAX)*(2*M_PI);
x+=cos(alfa);
y+=sin(alfa);
plikwyj<<x<<"\t"<<y<<endl;
}

getch();
    return 0;
}
