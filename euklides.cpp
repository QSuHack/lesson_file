#include <stdio.h>
#include <iostream>

using namespace std;


int NWD(int a, int b){
while (a!=b) {
if (a >b){
    a = a-b;
}
else{
    b = b-a;
}
 }
return a;
}
int NWW(int a, int b){
  int  c = NWD(a,b);
  int d = (a/c)*(b/c)*c;
  return d;
}

int main(){
    int a,b;
    cin >> a;
    cin >> b;
    cout <<NWD(a,b)<< "\n";
    cout << NWW(a,b);
    return 0;
}

