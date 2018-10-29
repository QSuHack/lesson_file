#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int t[10001];
int main()
{
for (int i = 0; i <=10001; i++){
    t [i] = 1 ;
}
int o ;
cout << "Podaj zakres (do 10000): ";
cin >> o;
int n =(int) sqrt(10001);
t[0] =0 ;
t[1]= 0;
for (int i =2 ; i <=n ; i++){
        for (int j=2*i ; j<10001;j+=i){
            t[j] = 0 ;
        }
}
int x = 0;
for (int i = 0; i <=o; i++){
    if( t[i] ==1){
        cout << i << " " ;
        x++;
}}
cout <<endl<<  "jest "<< x << " liczb pierwszych";
getch();
    return 0;
}
