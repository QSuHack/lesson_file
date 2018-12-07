#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int todec(string liczba, int podstawa){
int i =0 ;
int w = 0;
for (i=0 ; i < liczba.length(); i++){
if(liczba[i]-'0' <10){
w = w*podstawa+ (liczba[i] - '0');
}
else{
    int x = int(liczba[i])-55;
    w = w*podstawa+ x;
}
}
return w;}
int main()
{
    string a;
    int podstawa;
    int tab[30]={0};
cin >>a; // liczba
cin >> podstawa; // podstawa systemu
cout << todec(a,podstawa);

//for (int j =i-1; j >=0; j--){
  //  cout << tab[j];

getch();
    return 0;
}
