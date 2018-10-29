#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
float klucz ;
string tekst;

string szyfrowanie(string tekst,float klucz){
int a = floor(klucz);
int b = (klucz - a)*10;
string w;
for (char i : tekst ){
    i = (int) i;
int c = a*i+b;
while ( c >90){
        c = c-26;
    }


    w+= char(c);
}
return w;

//cout << a <<'\n' << b ;
}
string deszyfr(string tekst,float klucz){
int a = floor(klucz);
int b = (klucz - a)*10;
string w;// teraz deszyfracje todo
a = pow(a,-1);
for (char i : tekst ){
    i = (int) i;

int c = a*(c-b) ;// do zmodyfikowania
cout << c;
while ( c <=65){
        c = c+26;
    }
cout <<c;
while (c > 122){
    c -= 26;
}
    w+= char(c);
}
return w;

//cout << a <<'\n' << b ;
}
void inout() {
	cout << "Podaj tekst: ";
    cin >> tekst;
	cout << "Podaj klucz: ";
	cin >> klucz;
}
int main()
{
    char tryb;
	cout << "Wybierz tryb: szyfrowanie(s) lub deszyfrowanie(d) ";
	cin >> tryb;
	switch (tryb)
	{
	case 's':
			inout();
			cout<<szyfrowanie(tekst,klucz);
		break;
	case 'd':
		inout();
		cout <<deszyfr(tekst,klucz);
		break;
	default:
		cout << "Bledna opcja!";
		break;
	}

getch();
    return 0;
}
