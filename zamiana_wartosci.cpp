#include <iostream>
#include <conio.h>

using namespace std;
void zamien(int &a,int &b){
int x;
x= a;
a=b;
b=x;
}
int main()
{
    int a,b;

cin >> a >>b;
cout <<"\n" << a <<" "<<b << "\n" ;
zamien(a,b);
cout << a <<" "<< b;
getch();
    return 0;
}
