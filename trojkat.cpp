#include <iostream>
#include <conio.h>
//trojkat
using namespace std;

int main()
{
    int j,k;
    k = 1;
    cout<<"liczba wierszy:";
    cin >> j;
 for (int a = 1; a<=3; a++){
    for (int i = 1; i <=j; i++){
        for (int x=1;x<=k;x++)
        {
            cout << "*";
        }
        cout <<"\n";
        k++;
    }
    }
    getch();
    return 0;
}
