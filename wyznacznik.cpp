#include <iostream>
#include <conio.h>

using namespace std;
float wyzn(float a,float b,float c,float d){
return a*d-c*b;}
void rozw(float w,float wx,float wy){
    float x,y;
    if (w !=0 ){
            x = wx/w;
            y = wy/w;
            cout <<"x = "<<x<<"\n y= "<< y;
    }else{
        if (wx ==0 && wy==0){
            cout << "tozsamosciowe";
        }else{
        cout << "Sprzeczne!";
        }
    }
}
int main()
{
float w,wx,wy;
float a,b,c,d,e,f;
cout << "podaj po enterze a,b,c,d,e,f gdzie e,f to wartosci:\n";
cout << "gdzie ax+by=e \n cx+dy=f \n";
cin >>a>>b>>c>>d>>e>>f;
rozw (wyzn(a,b,c,d),wyzn(e,b,f,d), wyzn(a,e,c,f));

getch();
    return 0;
}
