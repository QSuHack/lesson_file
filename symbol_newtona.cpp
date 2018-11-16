#include <iostream>
#include <conio.h>

using namespace std;
long long silnia(int a){
if (a == 1 || a==0){
    return 1;
}
else {
    return silnia(a-1)*a;
}
}

long long symbol_newtona(int n, int k){
return silnia(n)/(silnia(k)*silnia(n-k));

}
int symbol_newtona2(int n, int k){
if (k ==0||n==k){
    return 1;
}

return symbol_newtona2(n-1,k)+symbol_newtona2(n-1,k-1);
}
int main()
{
int n,k;
cout<<"Podaj liczebnosc zbioru";
cin >> n;
cout<<"Podaj liczebnosc podzbioru";
cin>>k;
cout <<symbol_newtona(n,k);
cout <<"\n"<< symbol_newtona2(n,k);
getch();
    return 0;
}
