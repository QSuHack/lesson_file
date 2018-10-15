#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
int j, los, ;
int main()
{srand((unsigned)time(0));
    int minimum = 1000000;
    cout<<"podaj liczbe ";
cin >> j;
for (int  i = 1 ; i <=10; i++)
    int los = rand() % 100+1;
    cout << los << " ";
     if (los < minimum){
        minimum = los;
     }
    if (los > maximium){
        maximum = los;
    }
getch();
    return 0;
}
