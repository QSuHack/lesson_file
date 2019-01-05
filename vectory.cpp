// Sortowanie_vector.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
#include "stdafx.h"
#include <vector>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
using namespace std;
vector <int> function(vector <int> x) //or fun(vector <int> &x)
{
	for (int o = 0; o < x.size(); o++)
	{
		x[o] += 1;
	}
	return x;
}
int main()
{
	vector <int> x(2,100);
	vector <int> some_vector;
	vector <int>::iterator it; /*deklaracja obiektu typu iterator*/
	some_vector.resize(10);
	some_vector.assign(some_vector.size(), 0);
	x.push_back(4);
	for (int i = 0; i < some_vector.size(); i++)
	{
		std::cout << some_vector[i] << std::endl;
	}
	cout << "++next++";
	for (int i = 0; i < some_vector.size(); i++)
		{
			std::cout << some_vector[i] << std::endl;
		}
	vector <int> a = function(some_vector);
	cout << "po uzyciu function()\n";
	for (int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << ',';
	}
	cout << "+++++++++\n";

	vector <int> t;
	srand((unsigned)time(0));
	int tsize = 20;
	for (int i = 0; i <tsize; i++)
	{
		t.push_back( rand() % 100 + 1);
		cout << setw(2) << t[i] << " ";
	}
	cout << endl;
	cout << "++++++\n ";
	it = some_vector.begin();

	some_vector.insert(it, 23);
	cout << some_vector[0];
	std::vector<int> anothervector(4, 40);
	some_vector.insert(some_vector.begin(), anothervector.begin(), anothervector.end());
	cout << "$$$$$$$$$$$$$$$\n";
	for(auto itx=some_vector.begin(); itx < some_vector.end();itx++)
	{
		cout << *itx << ',';
	}
	_getch();

    return 0;
}

