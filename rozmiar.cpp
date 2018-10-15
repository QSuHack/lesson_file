#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int x = 23455555;
float y =4.455;
double z = 3.1234564;
long long dluga= 433525500;
string a ="helloooooooooo!";
cout << "int:" <<sizeof(x);
cout << "\nfloat:" <<sizeof(y);
cout << "\ndouble:" <<sizeof(z);
cout << "\nlong long:" <<sizeof(dluga);
cout << "\nstring:" <<sizeof(a);
cout << "\nchar:" <<sizeof(char);
cout << "\nstring:" << sizeof(string);
getch();
    return 0;
}
