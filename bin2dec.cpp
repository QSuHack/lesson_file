#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
string zamiana (int a,int podstawa)
{
    string tab = "";

while (a>0){
tab = (char)(a%podstawa+'0') + tab;
a /= podstawa;
}
return tab;
}
string zamiana2 (int a,int podstawa)
{
    string tab = "";
char znaki[30] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E'};
while (a>0){
tab = znaki[a%podstawa] + tab;
a /= podstawa;
}
return tab;
}


int main()
{
int a,b;
cin >> a;
cin >>b;
if (b <10 )cout << zamiana(a,b)<<endl;
cout << zamiana2(a,b);
getch();
    return 0;
}
