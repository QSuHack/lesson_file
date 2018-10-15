#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
int j,k;
    cout<<"liczba kolumn:";
    cin >> j;
    cout << "liczba wierszy:";
    cin >> k;
for (int i = 1; i <=k; i++){
    for (int x=1;x<=j;x++)
    {
        cout << setw(4)<<  x*i<<" ";
    }
    cout <<"\n";
}
getch();
    return 0;

}
