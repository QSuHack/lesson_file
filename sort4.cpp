#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
int t [20];
int main()
{srand((unsigned)time(0));
for (int i = 0; i <20; i++){
    t[i] = rand() % 100+1;
    cout << t[i] << " ";
}

int miejsce;
int mini = 1000;
cout <<endl;
for (int i=0; i<20; i++){
        mini =10000;
        for (int j=i; j<20; j++){

            if (t[j]<mini){
            mini= t[j];
             miejsce = j;


        } }
int temp= t [miejsce] ;
t [miejsce]= t[i];
t[i] = temp;

        }
cout << "TABLica";
for (int i = 0 ; i <20; i++){
    cout <<t[i]<<" " ;
}
return 0 ;
}
