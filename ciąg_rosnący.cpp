#include <iostream>
#include <fstream>
using namespace std;
bool rosnacy(int liczba)
{
	int x = liczba % 10;
	liczba /= 10;
	bool c = true;
	while (liczba > 0)
	{
		if (liczba % 10 >= x){
			c = false;
			break;
		}
		x = liczba % 10;
		liczba /= 10;
	}
	return c;

}

int main()
{
	ios_base::sync_with_stdio(false);
	int x;
	ifstream plik("liczby1.txt");
	

	while (!plik.eof())
	{
		plik >> x;
		if (rosnacy(x))
		{
		cout << x <<"\n";
		}
	}

    return 0;
}
