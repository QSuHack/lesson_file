#include <iostream>
#include <conio.h>
// S³awnia
using namespace std;
long long slawnia(int a){
if (a==0){
    return 0;
}
if (a == 1 ){
    return 1;
}
else {
    return slawnia(a-1)+a;
}
}
int main()
{
int b;
cin >> b;
cout << slawnia(b);
getch();
    return 0;
}
