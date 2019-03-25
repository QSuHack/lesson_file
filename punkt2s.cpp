#include <iostream>
#include <conio.h>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
struct punkt{
int x;int y;
bool operator<(punkt &p){
return (this->x < p.x);

}
bool operator>(punkt & p){
if (this->x > p.x){
    return true;
}
else return false;
}
};

bool sortowanie_punkt(punkt a, punkt b){
return (a.x < b.x);
}


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
sort(t,t+10,sortowanie_punkt);
cout << "Posortowane : \n";
for (int i = 0; i <10; i++){
    cout << t[i].x << " "<< t[i].y << "\n";
}
punkt a ={3,4};
punkt b ={4,8};
cout << (a>b);
cout << (a<b);
getch();
    return 0;
}
