#include <iostream>
#include <conio.h>

using namespace std;
void fun(){

char znak;
cout <<"Podaj znak";
cin >>znak ;
if (znak!='.'){
    fun();
    cout << znak;
}
}
int main()
{
fun();
getch();
    return 0;
}
