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
cout <<endl;
    for (int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            if (t[j]>t[j+1]){
                int cx = t[j];
                t[j]= t[j+1];
                t[j+1] = cx;}
        }}
for (int i = 0 ; i <20; i++){
    cout <<t[i]<<" " ;
}

getch();
    return 0;
}
