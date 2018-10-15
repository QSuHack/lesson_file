#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<ctime>

using namespace std;

int main()
{
    int t[10];
    srand((unsigned)time(0));
int    i = 0;
while (i <10){
    t [i] = rand();
    i++;
}
int maksimum = 0;
int minimum = 99124455;
for (int i = 0; i < 10;i++){
    if (t[i] >maksimum){
        maksimum = t[i];
    }
    if (t[i]<minimum){
        minimum = t[i];
    }
}
int a[10]={0};
cout << minimum <<'\n'<< maksimum <<endl ;
for (int i = 0; i <10 ; i++){
 cout << t[i]<<'\n';
}
getch();
    return 0;
}
