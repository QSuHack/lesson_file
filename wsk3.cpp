#include <iostream>
#include <conio.h>

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
cout << *(tab+2);3
uczen a;
uczen* wsk = &a;
cout << "imie";
cin >> wsk->imie ;
cout << "nazw";
cin >> wsk->nazw;
getch();
    return 0;
}
