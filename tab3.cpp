#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
//ciag fibonaciego
int main()
{
long long t[92];
t[0]= 1;
t[1] = 1;
for( int i = 2 ; i<92;i++){
    t[i]= t[i-1]+ t[i-2];
}
for (int j = 1; j<92 ;j++){
    cout << j << ' ';
    cout <<setw(5)<< t[j]<<' ';
    cout <<setw(5)<< (float) t[j-1]/t[j] << ' ' ;
    cout <<setw(5) << (float) t[j]/t[j-1] <<endl;
}
getch();
    return 0;
}
