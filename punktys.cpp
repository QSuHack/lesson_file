#include <iostream>
#include <conio.h>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
struct punkt{
int x;int y;

};
int main()
{
srand((unsigned)time(0));
punkt t[10];

for (int i =0; i<10; i++){
    t[i].x = rand()%80-40;
    t[i].y = rand()%80-40;


}
for (int i = 0; i <10; i++){
    cout << t[i].x << " "<< t[i].y << "\n";
}
for (int i=0; i<10; i++){
        for (int j=0; j<(10-i); j++){
            if (t[j].x>t[j+1].x)
            {
                swap(t[j].x, t[j+1].x);
            }
}}
cout << "Posortowane : \n";
for (int i = 0; i <10; i++){
    cout << t[i].x << " "<< t[i].y << "\n";
}
getch();
    return 0;
}
