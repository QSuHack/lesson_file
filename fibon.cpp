#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int j;
int k = 1;
int b = 1;
    cout<<"liczba kolumn:";
    cin >> j;
int o = j;
while (j >=k){
    cout << j<< "\n";
    j--;
}

do {
    cout <<o <<"\n";
    o--;
}while ( o>=k);
getch();
    return 0;
}
