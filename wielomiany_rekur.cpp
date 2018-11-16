#include <iostream>
#include <conio.h>
float wsp[20];

float horner(int n, float y,float wsp[20]){
if (n ==0){
    return wsp[0];
}
else return horner(n-1,y,wsp)*y+wsp[n];
}

using namespace std;
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
    cout <<"wynik to: "<< horner(n,y,wsp);

getch();
    return 0;
}
