#include <iostream>
#include <conio.h>

using namespace std;
void star(int n){
if (n==0){return;}
else {cout << "*";return star(n-1);}
}
int main()
{
star(10);
getch();
    return 0;
}
