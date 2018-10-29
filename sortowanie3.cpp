#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>

//nie dziala
using namespace std;
int t [20];
int main()
{srand((unsigned)time(0));
for (int i = 0; i <20; i++){
    t[i] = rand() % 100+1;
    cout << t[i] << " ";
}
int s[20];
int cx;
int mini = 1000;
cout <<endl;
for (int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            mini =1000;
            if (t[j]<mini){
            mini= t[j];

            t[j] = 99999899;

        }
s [j] = mini;
        }
        }
cout << "TABLica";
for (int i = 0 ; i <20; i++){
    cout <<s[i]<<" " ;
}

getch();
    return 0;
}
