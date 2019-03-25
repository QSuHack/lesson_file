#include <iostream>
#include <conio.h>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

void wypisz(){
int a = 30;
int* a2;
int* a3;
long long *wsk;
cout << a <<"\n"<< &a<<"\n" ;
a2 = &a;
cout << a2 <<" " << &a2 << "\n" << *a2 <<"\n";
cout << sizeof(a3)<< " "<< a3 << " "<< *a3 << "\n" << sizeof(wsk)<<"\n";
cout << *a2 +1<<"\n";
cout <<*(a2+1);
}

int main()
{
    cout << sizeof(float)<<" " << sizeof(double)<<"\n";
//wypisz();
int t[5]= {3,4,5,6,7};
int *tx = t; int* tc = &t[0];
cout << sizeof(t)<< "\n"<< sizeof(tc)<<" " << sizeof(tx)<<"\n";
for (auto it =0; it<5; it++){
    cout << *tx<<" ";
    tx++;
}
getch();
    return 0;
}
