#include <iostream>
#include <conio.h>

#include <fstream>
#include <random>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
double x =0; double x1;
double y = 0;
int wzor;
ofstream plikwyj("paprotka.xls");
for (int i = 0; i <20000; i++){
wzor= rand()%100;
double x1 =x ;
if (wzor < 73){
    x = x1*0.849-y*0.037+0.075;
    y= x1*(-0.037)+y*0.849+0.183;
}
else{
    if(wzor <86){
    x =x1*0.197+y*0.226+0.4;
    y = x1*0.226+0.197*y+0.049;
    }
    else{
        if(wzor<97){
        x =-x1*0.15+0.283*y+0.575;
        y = 0.26*x1+0.237*y-0.084;
        }else{
            x =0+0.5;
            y = 0.16*y;

        }
    }
}
plikwyj<<x<<"\t"<<y<<endl;
}
getch();
    return 0;
}
