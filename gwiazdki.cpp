#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Podaj poczatek przedzialu: ";

    int k, i;
    cin >> i ;
    cout << "Podaj koniec przedzialu: ";
    cin >>k;
for (k ;k>=i; k--){
    cout << k <<"\n";
}


getch();
    return 0;
}
