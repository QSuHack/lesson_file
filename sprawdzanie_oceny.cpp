#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
float a;
float b;
cout << "Podaj max punktow: \n";
cin >> a;
cout << "Podaj swoje punkty: \n";
cin >> b;
if (b < 0.45*a){
    cout << "Ocena ndst";
}
else{
    if (b < 0.6*a){
        cout <<"Ocena dop";

    }
    else {
        if (b < 0.75*a)
        {
            cout << "Ocena dst";
        }
    }
}
getch();
    return 0;
}
