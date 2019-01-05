#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
int t[15]= {3,4,5,4,6,3,6,3,2,3,4,5,4,6,5};
int minx =t[0];
int maxx =t[0];
for(int i=0; i <15; i++){
    if (t[i] < minx)
        minx = t[i];
    if(t[i] > maxx){
        maxx=t[i];
    }
}
int x [maxx-minx+1];
for(int o=0; o < maxx-minx+1; o++){x[o]=0;};
for (int j=0; j<15; j++){
    x[t[j]-minx]+=1;
}
for (int j=0;j<maxx-minx+1; j++)
    {
        int k= 1;
    while(k<=x[j]){
            cout<< j+minx<<" "; ++k;}
}



getch();
    return 0;
}
