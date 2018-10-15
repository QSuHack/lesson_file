#include <iostream>
#include <conio.h>

using namespace std;
double pow(double x, double wyk){
    if (wyk < 0){
    x = 1/x;
    wyk = -wyk;
    }
    if (wyk == 0){
        return 1;
    }
    double b =1;
    for( int i = 1; i <= wyk; i++){
        b = b*x;
    }
    return b;
}
int main()
{
double a,b;
cout << "Podaj podstawe: ";
cin >> a;
cout << "Podaj wykladnik: ";
cin >> b;
cout << pow(a,b);
getch();
    return 0;
}
