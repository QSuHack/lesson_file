#include <iostream>
#include <conio.h>

using namespace std;
int f(int x, int n){
if (n==1){
    return x;
}
else{
    if (n%3==0){
        int k = f(x, n/3);
        return  k*k*k;
    }
    else{
        return x*F(x, n-1);
    }
}
}
int main()
{

getch();
    return 0;
}
