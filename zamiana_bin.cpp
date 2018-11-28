#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


int bintodec(string bin){
    int wynik = 0;
    for (char i:bin){
        wynik = wynik*2+ i-'0';

    }
    return wynik;
}
int main()
{
    string n;
    float y;
    cout<<"Podaj : \n";
    cin>> n;



    cout <<"wynik to: "<<  bintodec(n);
getch();
    return 0;
}
