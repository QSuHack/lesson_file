#include <iostream>
#include <cstdio>
#include <conio.h>
#include <fstream>


using namespace std;


int main()
{
    string s;
    char znak;
    ifstream plik("plik.txt");
    while (!plik.eof()){
        plik.get(znak);
        cout << znak <<endl;
    }



    return 0;
}
