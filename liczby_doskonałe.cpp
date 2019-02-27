#include <iostream>
#include <conio.h>
//Poszukiwanie liczb doskonałych
using namespace std;

int main()
{ long long x =1, suma;
    for (long long i =6; i< 9000000000; i++){
         x=1;
        suma=0;
        while (x<(i/2+1)){
            if (i%x ==0){
               suma+=x;
            }
            x++;
        }
        if (suma == i){
            cout<<i<<" ";
        }
    }

    return 0;
}
