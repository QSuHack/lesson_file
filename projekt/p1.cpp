#include <iostream>
#include <conio.h>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <fstream>

using namespace std;
struct osoba {
string PESEL;
string imie;
string nazwisko;
string miasto;
};
void pobierz_dane(vector <osoba> &baza){

    ifstream plik("baza.txt");
    osoba c;
    while(!plik.eof()){
        plik >> c.imie >> c.nazwisko >> c.PESEL >> c.miasto;
        baza.push_back(c);
    }

}
time_t obecny_czas(){
SYSTEMTIME st;
GetLocalTime(&st);
y=st.wYear;
}
int main()
{

    vector <osoba> baza;
    pobierz_dane(baza);
    for(auto x:baza){
        cout << x.PESEL <<"\n";
    }


getch();
    return 0;
}
