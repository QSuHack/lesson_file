#include <iostream>
#include <conio.h>

using namespace std;
long long ackerman(int m, int n){
if (m==0){
    return n+1;
}
if(n==0){
return ackerman(m-1,1);
}
else{

return ackerman(m-1,ackerman(m,n-1));
}
}


int main()
{
int m,n;
cin >> m >>n;
cout << ackerman(m,n);
getch();
    return 0;
}
