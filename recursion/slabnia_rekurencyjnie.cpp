#include <iostream>
#include <conio.h>
// Słabnia
using namespace std;
long long slabnia(int a){
if (a==0){
    return 0;
}
if (a == 1 ){
    return 1;
}
else {
    return slabnia(a-1)+a;
}
}
int main()
{
int b;
cin >> b;
cout << slabnia(b);
getch();
    return 0;
}
