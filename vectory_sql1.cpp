#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
vector <int> a;
a.push_back(5);
a.push_back(4);
a.push_back(2);
for (int i =0; i <a.size();i++){
    cout << a.at(i)<<" ";
}
// cout << a[5];
// cout << a.at(5);
a.insert(a.begin()+2,9);
a.insert(a.end(),10);
a.insert(a.end(),5,2);
for(auto itx=a.begin(); itx < a.end();itx++)
	{
		cout << *itx << ',';
}
cout<<"\n";
vector <int> v(10,81);
v.pop_back();
v.pop_back();
v.erase(v.begin()+2);
for(auto itx=v.begin(); itx < v.end();itx++)
	{
		cout << *itx << ',';
}

getch();
    return 0;
}
