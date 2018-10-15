#include <stdio.h>
#include <iostream>
using namespace std;
int is_prime(int a){
    int x =0;
for (int i =  1;i <a ; i++)
{
    if (a % i == 0){
        x+=1;
    }

}if(x==1){
cout << "jest pierwsza";}
else {cout << "nie jest pierwsza";}
}


int main(){
int a;
cin >> a;
int b = a;
for (int i =  2;i <=b ; i++)
{
    while (b%i ==0){


        b= b/i;
    }
 cout << i <<" "; // to w petli gdy chcemy rozklad na czynniki
 // bez while gdy wszystkie dzielniki
}
cout << endl;
is_prime(a);


return 0;
}
