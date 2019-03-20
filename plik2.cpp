#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int a,b;
cout << "Podaj pierwsza liczbe: ";
cin >> a;
cout << "Podaj druga liczbe: ";
cin >> b;
cout <<"Suma wynosi: " << a+b<<endl;
cout <<"Roznica wynosi: "<< a-b<<endl;
cout <<"Iloczyn wynosi: "<< a*b<<endl;
cout <<"Iloraz wynosi: "<<(float)a/b<<endl;
cout << "Modulo wynosi: "<< a%b<<endl;
cout << "odwrotne dzielenie wynosi: "<<(float) b/a <<endl;
cout << "Odwrotne modulo: " << b%a <<endl;
getch();
    return 0;
}

