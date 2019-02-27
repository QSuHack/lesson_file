#include <iostream>
#include <conio.h>
#include <cstdio>
#include <fstream>

using namespace std;

bool palindrom(string s){
int n = s.length();
for (int i = 0; i < n/2; i++){
if (s[i] != s [n-i-1])
{
return false;
}
}
return true;
}

int main()
{
    string s;
    ifstream plik("dane_geny.txt");
    int licznik = 0;
    while (!plik.eof()){
    plik >> s;
    if (palindrom(s)){
        licznik +=1;
    }
    }
    cout << licznik;

getch();
    return 0;
}
