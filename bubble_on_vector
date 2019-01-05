#include <vector>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	vector <int> t; 
	srand((unsigned)time(0));
	int tsize = 20;
	for (int i = 0; i <tsize; i++)
	{
		t.push_back( rand() % 100 + 1);
		cout << setw(2) << t[i] << " ";
	} 
	cout << endl;
	for (int i = 0; i<t.size()-1; i++)
	{
		for (int j = 0; j<(t.size()-1 - i); j++)
		{
			if (t[j]>t[j + 1])
			{
				swap(t[j], t[j + 1]);
			}
		}
	}
	for (int i = 0; i <t.size(); i++)
	{
		cout << setw(2) << t[i] << " ";
	}

	_getch();

    return 0;
}
