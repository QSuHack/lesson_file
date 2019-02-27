#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int iloczyn(int liczba)
{
    int x =1 ;
while (liczba > 0){
x = x* (liczba % 10);
liczba /= 10;

}
return x;

}

int licz_moc(int liczba){
   int  licznik =0;
while (liczba >=10){
    liczba  = iloczyn(liczba);
    licznik +=1;
}
return licznik;
}

int odwroc(int liczba){
int w = 0;
while (liczba != 0){
w *= 10;
w = w+ liczba % 10;
liczba /= 10;

}

return w;
}

bool palindrom(int liczba){
    int odwrocona = odwroc(liczba);
    liczba += odwrocona;
    if (odwroc(liczba)== liczba){
    return true;
}}


int main()
{
    std::map <int ,int> mapa;
    int s=0;int licznik=0;
    ifstream plik("liczby59.txt");
    ofstream plikw("nowe_liczby.txt");
    while (!plik.eof()){
   plik >> s;
  //if (palindrom(s))
  //  {licznik +=1;
int    moc = licz_moc(s);
  plikw <<  moc<< " "<< s<<"\n";
  mapa[moc]++;

}

for (auto elem:mapa){
    cout<<elem.first<< " " << elem.second <<"\n";
}
plik.close();
plikw.close();
//cout << licznik;
getch();
    return 0;
}
