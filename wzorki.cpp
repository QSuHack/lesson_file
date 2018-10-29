#include <iostream>
#include <conio.h>

using namespace std;
string wzory(int x, char p){
string w;
for (int i = 0 ; i<=x;i++){
    w += p;}

return w;
}
double szescian(float x){return x*x*x;};
int main()
{
    int o;
    char p;
cin >>o;
cin >> p;
cout << wzory(o,p);
cout << szescian(o);
getch();
return 0;
}
