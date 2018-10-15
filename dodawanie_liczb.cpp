#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int j,k;
    cout<<"Poczatek przedzialu:";
    cin >> j;
    cout << "koniec przedzialu: ";
    cin >> k;
    int suma = 0 ;
    for (j;j<=k; j++)
    {
        suma+=j;
        if (suma > 300){
                cout<<j<<"\n";
        break;}
    }
    cout << suma;
 getch();
    return 0;
}
