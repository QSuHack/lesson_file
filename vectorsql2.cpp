
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
    for (int i =0; i <=
     5;i++){
        a.insert(a.end(),i,i);
    }
a.insert(a.begin()+4,10);
for(auto itx=a.begin(); itx < a.end();itx++)
	{
		cout << *itx << ' ';
}
cout <<endl;
vector<int> t;
for (int i = 0; i <20; i++)
	{
		t.push_back( rand() % 100 + 1);
		cout << t.at(i) << " ";
}
sort(a.begin(),a.end());
sort(t.begin(),t.end());
cout <<endl;
for(auto itx=a.begin(); itx < a.end();itx++)
	{
		cout << *itx << ' ';
}
cout <<endl;
for(auto itx=t.begin(); itx < t.end();itx++)
	{
		cout << *itx << ' ';
}
//a.clear();
getch();
    return 0;
}
