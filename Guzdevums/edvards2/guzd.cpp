/*********************************************************************
Autors: Andris Lapi��, al18011
Fails: (pamata, nevis testa, GG uzdevuma programma)
Izveidots: 14/03/2019
P�d�jo reizi modific�ts (uz pa�reiz�jo izskatu k� GG uzdevuma da�a: 22/05/2019

Izveidot programmu valod� C++, kas �auj izveidot vienvirziena saist�to
sarakstu (izmantojot dinamisk�s datu strukt�ras), kur� glab�jas noteikta
tipa v�rt�bas. J�b�t  paredz�tai iesp�jai sarakstu papildin�t ar jaunu
elementu (pielikt elementu saraksta gal�), izdruk�t sarakstu, izn�cin�t
sarakstu. Bez tam j�uzraksta funkcija, kura aprakst�ta zem�k. Izn�cinot
saraksta elementus, korekti j�atbr�vo izdal�t� atmi�a. Galvenaj�
programm�:
   a) j�b�t iesp�jai ievad�t saraksta elementus (izveidot patva��gu
sarakstu),
   b) j�pielieto uzrakst�t� funkcija sarakstam,
   c) j�izdruk� saraksts p�c funkcijas darb�bas.
   d) beig�s j�izn�cina saraksts (lietojot delete).
S�k�kas pras�bas sk. Laboratorijas darbu noteikumos.
G14. Uzrakst�t funkciju, kas izmet no saraksta tos elementus, kas seko
aiz elementa ar v�rt�bu n un kuri nav vien�di ar n.
**********************************************************************/
#include<iostream>
#include"lvtocon.h"
#include "../edvards/exception.h"
using namespace std;

const int N = 1;
int main() {
    elem *start=NULL, *last;
    int a[N]={5}; // k� noteikta tipa v�rt�bas izv�l�jos veselus skait�us
    for(int i=0;i<N;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }

    int n = 1;
    //cout << "Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: ";
    //cin >> n;

    //izmest(start, n);

    try {
        if(izmest(start,n)) {
            throw "Veiksm�ga programmas izpilde!";
        } else {
            throw "Nebija izv�l�ta t�da v�rt�ba, lai veiktu dz��anu.";
        }
    } catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;
}
