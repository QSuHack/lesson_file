#include <iostream>
#include <conio.h>

using namespace std;

int NWD(int a, int b){
if (b==0){
    return a;
}
else{
    return NWD(b,a%b);
}
}


int main()
{
int x,y;
cout<< "Podaj 2 liczby int";
cin >> x;
cin >>y ;
cout << NWD(x,y);
getch();
return 0;
}
