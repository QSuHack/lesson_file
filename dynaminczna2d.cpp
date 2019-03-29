#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
srand((unsigned) time(0));
int l_wiersz, l_kolumn;
int** tab;
cout << "Podaj liczbe wierszy i kolumn: \n";
cin >> l_wiersz >> l_kolumn;

try{
    tab = new int*[l_wiersz];
    for (int i =0; i<l_wiersz; i++){
         tab[i] = new int[l_kolumn];
    }
}
catch (bad_alloc){
cout << "Blad alokacji";
return 666;
}
try{
for (int i=0;i<l_wiersz;i++){
    for (int j=0; j < l_kolumn;j++ ){
        tab[i][j]= rand()%100;
    }
}}
catch (bad_alloc){
cout << "blad kolumn";
return -1;
}
for (int i=0;i<l_wiersz;i++){
    for (int j=0; j < l_kolumn;j++ ){
        cout<<setw(2) <<tab[i][j]<<" ";
    }
    cout <<"\n";
}
for (int i=0; i <l_wiersz; i++){
    delete[] tab[i];
}
delete[] tab;
getch();
    return 0;
}
