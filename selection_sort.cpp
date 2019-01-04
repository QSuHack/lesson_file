#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int t [20];
int main()
{srand((unsigned)time(0));
for (int i = 0; i <20; i++){
    t[i] = rand() % 100+1;
    cout <<setw(2)<< t[i] << " ";
}
cout <<endl;

for (int i= 0; i <20; i++){
    int k = i;
    for (int j = i+1; j<20; j++){
        if (t[j]<t[k]){
           k =j;
        }
    }
    swap(t[k],t[i]);
}
for (int i = 0 ; i <20; i++){
    cout <<setw(2)<<t[i]<<" " ;
}
}
