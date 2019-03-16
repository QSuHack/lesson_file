#include <vector>
#include <iostream>
#include <cmath>
#include <set>
#include <fstream>
using namespace std;
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
    return 0;
}
