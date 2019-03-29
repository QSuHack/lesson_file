#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int a; int b;
int *a1 = &a;
int *b1 = &b;
cout << a1 <<"\n";
cout << b1 <<"\n";
cout << *a1 <<"\n";

cout << *b1 <<"\n";
cout <<" in"<< *a1++ << "\n";
*a1 = *b1;
cout << *a1 <<" " << *b1;
cout << ++*a1;
cout << (*a1)++;
cout << (*a1 );



getch();
return 0;
}
