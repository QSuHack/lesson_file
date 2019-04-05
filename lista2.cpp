#include <iostream>
#include <conio.h>

using namespace std;
struct element{
int liczba;
element *next;
};
int main()
{
element* head = NULL;
element* nowy;

for (int i = 0; i<10; i++){
try {
nowy = new element;

}
catch(bad_alloc)
{
    cout << "Brak miejsca";
}
nowy->liczba = i ;
nowy->next = head;
head = nowy;
}
int usun;
cout << "Jaki element chcesz usunac ? ";
cin >>usun;

element* tmp =head;
element* poprzedni = head;
while(tmp!=NULL){
if (tmp->liczba == usun)
{
    if (tmp == head){
    head = head->next;
    delete tmp;
    poprzedni = head;
    tmp = head;
    }
else{
 poprzedni->next = tmp->next;
 delete tmp;
 tmp = poprzedni->next;
}
}
else{
    poprzedni = tmp;
    tmp = tmp->next;
}
}


element* wsk = head;
while (wsk != NULL){

 cout << wsk->liczba << " ";
 wsk = wsk-> next;
}
getch();
    return 0;
}
