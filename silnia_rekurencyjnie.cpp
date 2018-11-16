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
int main()
{
    int b;
    cin >> b;
cout << silnia(b);
getch();
    return 0;
}
