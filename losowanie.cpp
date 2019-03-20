#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<ctime>
using namespace std;

int main()
{
srand((unsigned)time(0));
int j;
int i = 0;
int los = rand() % 1000+1;
cout << "Wylosowano liczbe z przedzialu <1;1000> \n Zgadnij ja !";
do {
i++;
cout<<"podaj liczbe ";
cin >> j;

if (j > los){

    cout<<"\nLiczba jest zbyt duza \n";

}
if (j< los){
    cout <<"\nLiczba jest zbyt mala \n";

}

}while(j!=los);
cout <<"udalo ci sie po "<< i;
getch();
    return 0;
}
