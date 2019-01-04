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
    for (int i=0; i<19; i++){
        for (int j=0; j<(19-i); j++){
            if (t[j]>t[j+1])
            {
                swap(t[j], t[j+1]);
            }
        }}
for (int i = 0 ; i <20; i++){
    cout <<setw(2)<<t[i]<<" " ;
}

getch();
    return 0;
}
