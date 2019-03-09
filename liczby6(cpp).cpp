// liczby6(cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

#include <set>
#include <fstream>
using namespace std;
set <int> znajdz_czynniki(int n)
{
	set <int> czynniki;

	int k = 2;
	while (n>1){
		while(n%k==0){
			czynniki.insert(k);
				n /= k;
		}
		k++;
	}
	return czynniki;
}
bool check(set<int> sets){
	bool flag = true;
	for (auto x : sets ){
	if((int)x %2 !=1|| sets.size() != 3){
		flag = false;
	}
	}
	return flag;
}
int main()
{
	int x;
	int l = 0;
	ifstream plik("liczby2.txt");
	while(!plik.eof()){
		plik >> x;
		if (check(znajdz_czynniki(x)))
		{
			l++;
		}
	}
	cout << l;
	
    return 0;
}

