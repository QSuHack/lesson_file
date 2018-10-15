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
for (i ;i <=k ; i ++ ){
    if (i %2 == 0){
        cout <<i << "\n" ;
    }
}


getch();
    return 0;
}
