#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char znak;
    map <char,int> mapa;
    ifstream tekst("tekst.txt");
    while (!tekst.eof()){
    tekst >>znak;
    mapa[znak]+=1;

    }
    float suma=0;
for (auto elem:mapa){
    suma +=elem.second;
}
    for (auto elem:mapa)
cout << elem.first << " "<< elem.second <<" " << fixed <<setprecision(2)<<((elem.second/suma)*100)<<"%\n";
getch();
    return 0;
}
