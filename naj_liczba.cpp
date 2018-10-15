#include <iostream>
#include <conio.h>
// znajdowanie najmniejszej
using namespace std;

int main()
{
cout << "Podaj 3 liczby calkowite : \n";
int a,b,c;
cin >> a >> b >>c ;
if (a < b){
    if (a <c ){
        cout <<"Najmniejsza to:" <<a ;
    }
    else {
        cout <<"Najmniejsza to:" << c;
    }
    }
else{
    if( b < c){
        cout <<"Najmniejsza to:" << b;
}
    else {"Najmniejsza to:" <<
        cout <<"Najmniejsza to:" << c;}
}

getch();
return 0;
}



