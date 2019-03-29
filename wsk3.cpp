#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

struct uczen{
string imie;
string nazwisko;
float srednia;
};
int* ustaw(int t[]){

t[0]= 4;
t[1] = 5;
t[2] = 1;
return  t;

}
int tab[3];
int main()
{
cout << *ustaw(tab);
cout << *(tab+1);
cout << *(tab+2)<<"\n";
uczen a[2];
uczen* wsk = a;
cout << "imie";
cin >> wsk->imie ;
cout << "nazw";
cin >> wsk->nazwisko;
cin >> wsk->srednia;
cin >> (wsk+1)->imie >> (wsk+1)->nazwisko >> (wsk+1)->srednia;
cout << wsk -> imie <<" "<< wsk -> nazwisko << (wsk)->srednia<< "\n" << (wsk+1)->imie <<" "<<(wsk+1)->nazwisko << (wsk+1)->srednia;

getch();
    return 0;
}
