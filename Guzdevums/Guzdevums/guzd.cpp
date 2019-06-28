/*********************************************************************
Autors: Andris Lapiòð, al18011
Fails: guzd.cpp
Izveidots: 14/03/2019
Pçdçjo reizi modificçts: 14/03/2019

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
using namespace std;

struct elem {
    int value;
    elem *next;
};
void print(elem *s) {
    elem *p=s;
    while (p != NULL) {
        cout<<p->value<<" ";
        p=p->next;
    }
    cout << endl;
}
void del(elem *&s) {
    elem *p = s;
    while (p!=NULL) {
        s = p->next;
        delete p;
        p=s;
    }
    cout << "Visi elementi ir izdzçsti!" << endl;
}
void add(elem *s) {
    int ok;
    do {
    elem*p = new elem; // Izveidoju jaunu elementu un priekð 'last->next' dodu jauno râdîtâju
    cout << "Pievienojiet jaunu vçrtîbu: ";
    cin >> p->value;
    s->next = p;
    s=p;
    cout << "Vai vçlaties vçl pielikt sarakstam klât elementu? Ievadiet 1 vai 0: ";
    cin >> ok;
    } while (ok == 1);
}
void izmest(elem *s) {
    int n;
    cout << "Izvçlaties skaitli(elementu) no saraksta, kuru izmest: ";
    cin >> n;
    int flag = 0; // Izmantoju 'flag' mainîgo, lai noteiktu, vai iepriekð iterâcijâ jau bija sastopams prasîtais skaitlis
    elem *p = s;
    while (p!=NULL) {
        if (p->value == n && flag==0) {
            s = p; //saglabâju râdîtâju, kas atrodas pirms paðreizçjâ 'p', lai tam sniegtu elemnta râdîtâju pçc 'p'
            p=p->next;
            flag = 1;
        } else if (p->value != n && flag==1) {
            s->next = p->next; //padodu elementam pirms 'p' elementa atraðanâs vietu, kas atrodas pçc 'p'
            delete p;
            p = s->next;
        } else if (p->value == n && flag==1) {
            s = p;
            p=p->next;
        } else if (p->value != n && flag==0) {
            p=p->next;
        }
    }
    if (flag==0) { // Gadîjums, kad prasîtais skaitlis netika atrasts
       cout << "Nebija izvçlçta tâda vçrtîba, lai veiktu dzçðanu." << endl;
    }
}
int main() {
    elem *start=NULL, *last;
    int a[1]={5}; // kâ noteikta tipa vçrtîbas izvçlçjos veselus skaitïus
    for(int i=0;i<1;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }
    print(start);
    //add(last);
    print(start);
    izmest(start);
    print(start);

    del(start);
    return 0;
}


/********TESTA PLÂNS*********************************************************
  G14  |   Ievade - funckijâ 'izmest()'           Prog.vçlamâ reakcija        Rezultâts C++

            18 83 42 67 3 3 4 3                   18 83 42 67 3 3 3             +
            (ievada - 3)

            18 83 42 67 3 3 4 3                   Nebija izvçlçta tâda          +
            (ievade - 1)                          vçrtîba, lai veiktu dzçðanu.

            18 83 42 67 3 3 4 3                   18 83                         +
            (ievade - 83)

            5 (ievade - 3)                        Nebija izvçlçta tâda vçrtîba, lai veiktu dzçðanu.          +

- Izsaucot funckiju del()(izdzçst visus elementus) = Visi elementi ir izdzçsti!

- Izsaucot funckiju add()(pievienojot elementu) = 18 83 42 67 + add() (ievade - 3) = 18 83 42 67 3 (izvade notiek, izsaucot funckiju print())

*******************************************************************************/
