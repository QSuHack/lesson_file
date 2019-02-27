#include <iostream>
#include <conio.h>
#include <fstream>
#include <random>
#include <cmath>
#include <cstdio>
#define M_PI 3.14159265358979323846
using namespace std;
void smok(int n){
double x =0; double x1;
double y = 0;
int wzor;
ofstream plikwyj("smok.xls");
for (int i =0; i < n; i++)
    {
wzor= rand()%2;
if (wzor == 0){
x1 = x;
x= -0.4*x1-1;
y= -0.4*y+0.1;
}
else {
    x1= x;
    x = 0.76*x1-0.4*y;
    y = 0.4*x1+0.76*y;
}

plikwyj<<x<<"\t"<<y<<endl;
}
plikwyj.close();
}
int main()
{


smok(10000);

//getch();
    return 0;
}
