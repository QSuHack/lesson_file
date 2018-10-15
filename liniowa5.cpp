//Specyfikacja: Problem: Rozwi¹zanie równania liniowego
//Dane wejsciowe a,b- rzeczywiste
//Dane wyjsciowe rozwiazanie równania liniowego
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
float a,b;
cout<< "Rozwiazywanie rownania y=ax+b"<<endl << "Podaj Wspolczyniki a: ";
cin >> a;
cout << "Podaj wspolczynnik b: ";
cin >> b;

if(a==0)
    {
        if(b==0){
            cout << "Tozsamosciowe" <<endl;

        }
        else{
            cout <<"Sprzeczne"<<endl;
        }
    }
    else
    {
        if(b == 0)
        {
            cout << "0";
        }
        else
        {
            cout<<(-1)*b/a;
        }
    getch();
        return 0;
    }
}
