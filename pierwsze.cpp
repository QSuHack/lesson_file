#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int is_prime(int a){
    int x =0;
    float ap = sqrt(a);
for (int i =  1;i <=ap ; i++)
{
    if (a % i == 0){
        x+=1;
    }

}if(x==1){
cout <<a << "\n";}
//else {cout <<a << "nie jest pierwsza";}
}


int main()
{
    int c;
cout << "Zakres do:";
cin >> c;
for (int i = 2; i <=c ; i++)
{
 is_prime(i)   ;
}
getch();
    return 0;
}
