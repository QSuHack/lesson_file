#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
#include <iomanip>


using namespace std;
int t [20];
int main()
{srand((unsigned)time(0));
for (int i = 0; i <20; i++){
    t[i] = rand() % 100+1;
    cout <<setw(2)<< t[i] << " ";
}

for (int i = 1; i< 20; i++)
{
int x = t[i];
int j = i-1;
while(x<t[j]&&j>=0){
t[j+1] = t[j];
    j--;
}
t[j+1]=x;
}
cout<<"\n";
for (int i = 0; i <20; i++){
    cout <<setw(2)<< t[i] << " ";
}

getch();
    return 0;
}
