#include <vector>
#include <cmath>

vector<int> zwroc_dzielniki(int n){
	vector <int> dzielniki;
	double sn = fabs(n / 2);
	for (int i = 1; i <= sn; i++)
	{
		if (n % i == 0)
		{
			dzielniki.push_back(i);
		}
	}
	return dzielniki;
}
