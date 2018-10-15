#include <iostream>
#include <conio.h>

using namespace std;
long long silnia(int p)
{
int x = 1;
long long b = 1;
while (x <= p){
b =b * x;
x++;

}
return b;
}
int main()
{
int a;
cout << "Podaj liczbe: ";
cin >> a;
for( int x = 1; x<=a;x++){
        if (silnia(x) < 0)
            {
                cout << "Koniec zakresu" ;
                break;
            }

        cout <<"Silnia z " <<x << " wynosi: "<< silnia(x)<<"\n";
        }

getch();
return 0;
}
