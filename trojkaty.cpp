#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
bool fun(int x, int y,int z){
if (x*x+y*y==z*z) {
        return true;}

if (y*y+z*z==x*x) {return true;}
if (x*x+z*z==y*y){return true;}
else return false;
}
vector<int> sortuj(vector<int> t){
for (int i = 0; i<t.size()-1; i++)
	{
		for (int j = 0; j<(t.size()-1 - i); j++)
		{
			if (t[j]>t[j + 1])
			{
				swap(t[j], t[j + 1]);
			}
		}
}
}

vector<int> t;
bool czy_mozna_trojkat(vector <int>::iterator it){
if (*(it-1)+ *(it) < *(it-2) && *(it-1)+ *(it-2) < *(it) &&*(it-2)+ *(it) < *(it-1)){
    return true;
}
}
int main()
{
int tab[500];
ifstream plik("dane_trojkaty.txt");
ofstream wynik("wyniki_trojkaty.txt");
int x= 0;
while (!plik.eof())
{
    plik >>tab[x];
    t.push_back(tab[x]);
    x++;
}
wynik <<"80.1.\n";
for(int i = 0; i <499;i++)
{
if (fun(tab[i],tab[i+1],tab[i+2])){
    wynik << tab[i]<<" "<<tab[i+1]<<" "<<tab[i+2]<<"\n";
}
}


t = sortuj(t);
auto it=t.end()-1;
if (czy_mozna_trojkat(it)){
    cout <<*it <<" " << *(it-1)<<" " << *(it-2);
}
for (auto it=t.begin();it<t.end();it++){

}
    return 0;
}
