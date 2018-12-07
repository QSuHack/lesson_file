#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
    int a;
    int tab[30]={0};
cin >>a;
int i =0 ;
while (a >0){
tab [i] = a%2;
a /= 2;
i++;
}
for (int j =i-1; j >=0; j--){
    cout << tab[j];
}
getch();
    return 0;
}
