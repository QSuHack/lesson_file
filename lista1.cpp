#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>
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
element* wsk = head;
while (wsk != NULL){

 cout << wsk->liczba << " ";
 wsk = wsk-> next;
}
element* tmp = head;
while (head!=NULL){
tmp = head;
head = head -> next;
delete tmp;
}
wsk = head;
while (wsk != NULL){

 cout << wsk->liczba << " ";
 wsk = wsk-> next;
}
getch();
    return 0;
}
