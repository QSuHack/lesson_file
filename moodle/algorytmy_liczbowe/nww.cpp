#include <iostream>
using namespace std;

int NWD(int a, int b)
{
	while (a != b)
	{
		if (a < b) { b = b - a; }
		else
		{
			a = a - b;
		}
	}
		return a;
}

int NWW(int a, int b)
{
	return a*b / NWD(a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << NWW(a, b);
    return 0;
}
