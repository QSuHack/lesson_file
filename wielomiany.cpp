#include <iostream>
#include <conio.h>

using namespace std;
float wsp[20];
float wielomian(int n , float x,float wsp[20]){
    float wynik =0;
    for (int i =0;i <=n;i++){
        wynik = wynik*x;
        wynik += wsp[i];

    }
    return wynik;
}
int main()
{
    int n;
    float y;
    cout<<"Podaj stopien wielomianu: \n";
    cin>> n;
    cout << "Podaj x: \n";
    cin >> y;
    cout << "Podaj wspolczynniki: \n";
    for(int i =0;i<=n;i++){
        cin >> wsp[i];
    }
    cout <<"wynik to: "<< wielomian(n,y,wsp);

getch();
    return 0;
}
