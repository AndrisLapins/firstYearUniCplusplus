/*********************************************************************
Autors: Andris Lapiòð, al18011
Fails: (pamata, nevis testa, GG uzdevuma programma)
Izveidots: 14/03/2019
Pçdçjo reizi modificçts (uz paðreizçjo izskatu kâ GG uzdevuma daïa: 22/05/2019

Izveidot programmu valodâ C++, kas ïauj izveidot vienvirziena saistîto
sarakstu (izmantojot dinamiskâs datu struktûras), kurâ glabâjas noteikta
tipa vçrtîbas. Jâbût  paredzçtai iespçjai sarakstu papildinât ar jaunu
elementu (pielikt elementu saraksta galâ), izdrukât sarakstu, iznîcinât
sarakstu. Bez tam jâuzraksta funkcija, kura aprakstîta zemâk. Iznîcinot
saraksta elementus, korekti jâatbrîvo izdalîtâ atmiòa. Galvenajâ
programmâ:
   a) jâbût iespçjai ievadît saraksta elementus (izveidot patvaïîgu
sarakstu),
   b) jâpielieto uzrakstîtâ funkcija sarakstam,
   c) jâizdrukâ saraksts pçc funkcijas darbîbas.
   d) beigâs jâiznîcina saraksts (lietojot delete).
Sîkâkas prasîbas sk. Laboratorijas darbu noteikumos.
G14. Uzrakstît funkciju, kas izmet no saraksta tos elementus, kas seko
aiz elementa ar vçrtîbu n un kuri nav vienâdi ar n.
**********************************************************************/
#include<iostream>
#include"lvtocon.h"
#include "../edvards/exception.h"
using namespace std;

const int N = 1;
int main() {
    elem *start=NULL, *last;
    int a[N]={5}; // kâ noteikta tipa vçrtîbas izvçlçjos veselus skaitïus
    for(int i=0;i<N;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }

    int n = 1;
    //cout << "Izvçlaties skaitli(elementu) no saraksta, no kura sâkot skaistît, izmest pârçjos elemntus: ";
    //cin >> n;

    //izmest(start, n);

    try {
        if(izmest(start,n)) {
            throw "Veiksmîga programmas izpilde!";
        } else {
            throw "Nebija izvçlçta tâda vçrtîba, lai veiktu dzçðanu.";
        }
    } catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;
}
