#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{
int *a=NULL;
a = new int;

*a = 5;
cout << *a << "adres: "<<a;
delete a;
cout << "\n" <<*a<<" " << a;
cout <<" " << &a << " " << &*a;
int *wsk =NULL;
cout << "\n\n\n\n";
try{
    wsk = new int[1000];
}
catch (bad_alloc){
cout << "B³ad alokacji";
return 666;
}
for (int i=0; i <1000; i++){
    wsk[i] = rand()%100;
    cout << wsk[i]<<" ";
    // *(wsk+1)= rand()%100;
}
getch();
    return 0;
}
