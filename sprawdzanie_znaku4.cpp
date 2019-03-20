#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
float a,b;
cout << "Podaj pierwsza liczbe: ";
cin >> a;

if(a>0)
{
    cout<<a<<" jest dodatnia";
}
else // od tego momentu x<=0
{
    if(a<0)
    {
    cout<<a<<" jest ujemna";
    }
    else{
    cout <<a << " jest nieujemna i niedodatnia";
    }
}
getch();
    return 0;
}
