#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
HANDLE kon = GetStdHandle(STD_OUTPUT_HANDLE);

void korale(int n)
{

	if (n == 1)
	{

		SetConsoleTextAttribute(kon, 3);
		cout << '*';
	}
	else
	{
		if (n % 2 == 0)
		{
			korale(n / 2);
			cout << "o";
		}
		else
		{
			korale((n - 1) / 2);
			cout << '*';
		}
	}
}

int main()
{
	int a;
	cin >> a;
	korale(a);
	getch();
	return 0;
}
