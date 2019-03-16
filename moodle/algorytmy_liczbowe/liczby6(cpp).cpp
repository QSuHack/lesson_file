// liczby6(cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <conio.h>
#include <set>
#include <fstream>
#include <ctime>
#include <chrono>
using namespace std;

set <int> znajdz_czynniki2(int n)
{
	set <int> czynniki;
	while (n%2==0){
		czynniki.insert(2);
		n /= 2;
		return czynniki;
	}
	int k = 3;
	while (n>1){
		while(n%k==0){
			czynniki.insert(k);
				n /= k;
		}
		k+=2;
	}
	return czynniki;
}

bool check2(set<int> sets){
	if( sets.size() !=3){
		return false;
	}
	return true;
}


bool checkx(int a)
{
	int a1 = a;
	int y = 0;
	int k = 2;
	bool x = 0;
	while (a > 1 && (y < 2 ? (k <= sqrt(a1)) : (true)))
	{
		while (a%k == 0)
		{
			if (k % 2 == 0)
			{
				return false;
			}
			a /= k;
			if (x == 0)
			{
				y++;
				a1 = a;
				x = 1;
			}
		}
		if (y < 3)
		{
			return false;

		}
		x = 0; k++;
	}
		if (y == 3)
		{
			return true;
		}
		return false;

}


bool znajdz_czynnii(int n)
{
	set <int> czynniki;
	int k = 3;
	int n1 = n;
	while (n>1 )
	{
		//&& k <= sqrt(n1)
		while (n%k == 0)
		{
			czynniki.insert(k);
			n /= k;
		}
		k += 2;
	
	}
	return( czynniki.size() ==3);
}

bool znajdz_czynniki(int n) 
{
	set <int> czynniki;
	int k = 3;
	int n1 = sqrt(n)+1;
	while (n>1 && k<=n1)
	{
		while (n%k == 0)
		{
			czynniki.insert(k);
			n /= k;
		}
		k += 2;

	}
	if (n !=1){
		czynniki.insert(n);
	}
	return(czynniki.size() == 3);
}
int main()

{
	
	auto start = std::chrono::system_clock::now();
	ios_base::sync_with_stdio(false);
	int x;
	int l = 0;
	ifstream plik("liczby2.txt");
	while(!plik.eof()){
		plik >> x;
		if (x % 2 == 0 )
		{
			continue;
		}
	if (znajdz_czynniki(x))
		{
			l++;
		}
	}
	cout << l;

	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout<< "elapsed time: " << elapsed_seconds.count() << "s\n";
	_getch();
    return 0;
}

