#include <iostream>
#include <conio.h>
// zadanie 1 zastepstwo xd
using namespace std;
float srednia(float x, float y){
return (x+y)/2;
}
int main()
{
float a,b;
cout <<" Pierwsza liczba: ";
cin>> a;
cout<< "Druga liczba: ";
cin >>b;
cout <<srednia(a,b);
getch();
    return 0;
}
