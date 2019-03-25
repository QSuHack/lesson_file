// punkty2(cpp).cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

#include <conio.h>
using namespace std;

struct Punkt
{
	int x; int y;
	bool operator< (Punkt p)
	{
		if (this->x != p.x)
		{
			return (this->x < p.x);
		}
		return (this->y < p.y);
	}

	bool operator> (Punkt p)
	{
		return (this->x > p.x);
	}

};

ostream& operator<< (ostream& out, Punkt p) //overloading w celu wyœwietlania
	{
		out << p.x << " " << p.y;
		return out ;
	}

int main()
{
	srand((unsigned)time(0));
	vector <Punkt> o;
	Punkt a = { 3,8 };
	Punkt b = { 5,2 };
	Punkt c;
	cout << (a < b);
	for (int i = 0; i < 20;i++)
	{
	c.x = rand() % 100 + 1;
	c.y = rand() % 100 + 1;
	o.push_back(c);
	}
	cout << "\n Przed ";
	for (auto x : o)
	{
		cout << x<<"|";
	}
	/*for (int i = 0; i<o.size() - 1; i++)
	{
		for (int j = 0; j<(o.size() - 1 - i); j++)
		{
			if (o[j]>o[j + 1])
			{
				swap(o[j], o[j + 1]);
			}
		}
	}
	*/
	sort(o.begin(), o.end());

	cout << "\n Po: ";
	for(Punkt x : o){
		cout << x <<"|";
	}

	cout <<"koniec"<< a;
	getch();
    return 0;
}
