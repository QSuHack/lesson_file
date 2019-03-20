#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
string a;
cin >>a;
char c;
cin >> c;
int m ;
int n = a.length();

for (int i = 0; i < n; n++ )
{int o = (int) a [i];
c =(int )c;
    if (o  == c){
    m +=1;
}
}
cout <<m;
getch();
    return 0;
}
