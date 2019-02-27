#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
double fun(double x){
return 2*x*x+5;
}
double calka(double a,double b, int n){
double h = abs(a-b)/n;
double pole = 0;
for (int i=0; i <n; i++){
double c = abs(fun(a+h*i));
double d = abs(fun(a+h*i+h));
pole += ((c+d)*h)/2;
}
return pole;
}
int main()
{

int n;
double a,b;
cout<<"podaj a";
cin >>a;
cout << "podaj b";
cin >>b;
cout << "podaj n";
cin >>n;


cout <<calka(a,b,n);
getch();
    return 0;
}
