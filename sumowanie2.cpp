#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<ctime>
using namespace std;

int main()
{
srand((unsigned)time(0));
int j = 0;
int s = 0;
do {

int los = rand() % 30+1;
s+=los;
cout <<los<<endl;
j++;
}while(s < 300);
cout <<"Suma wynosi: "<< s<<"\n Dodalo: "<<j;
getch();
    return 0;
}
