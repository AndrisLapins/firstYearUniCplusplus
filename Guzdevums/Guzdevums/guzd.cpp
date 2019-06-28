/*********************************************************************
Autors: Andris Lapi��, al18011
Fails: guzd.cpp
Izveidots: 14/03/2019
P�d�jo reizi modific�ts: 14/03/2019

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
    cout << "Visi elementi ir izdz�sti!" << endl;
}
void add(elem *s) {
    int ok;
    do {
    elem*p = new elem; // Izveidoju jaunu elementu un priek� 'last->next' dodu jauno r�d�t�ju
    cout << "Pievienojiet jaunu v�rt�bu: ";
    cin >> p->value;
    s->next = p;
    s=p;
    cout << "Vai v�laties v�l pielikt sarakstam kl�t elementu? Ievadiet 1 vai 0: ";
    cin >> ok;
    } while (ok == 1);
}
void izmest(elem *s) {
    int n;
    cout << "Izv�laties skaitli(elementu) no saraksta, kuru izmest: ";
    cin >> n;
    int flag = 0; // Izmantoju 'flag' main�go, lai noteiktu, vai iepriek� iter�cij� jau bija sastopams pras�tais skaitlis
    elem *p = s;
    while (p!=NULL) {
        if (p->value == n && flag==0) {
            s = p; //saglab�ju r�d�t�ju, kas atrodas pirms pa�reiz�j� 'p', lai tam sniegtu elemnta r�d�t�ju p�c 'p'
            p=p->next;
            flag = 1;
        } else if (p->value != n && flag==1) {
            s->next = p->next; //padodu elementam pirms 'p' elementa atra�an�s vietu, kas atrodas p�c 'p'
            delete p;
            p = s->next;
        } else if (p->value == n && flag==1) {
            s = p;
            p=p->next;
        } else if (p->value != n && flag==0) {
            p=p->next;
        }
    }
    if (flag==0) { // Gad�jums, kad pras�tais skaitlis netika atrasts
       cout << "Nebija izv�l�ta t�da v�rt�ba, lai veiktu dz��anu." << endl;
    }
}
int main() {
    elem *start=NULL, *last;
    int a[1]={5}; // k� noteikta tipa v�rt�bas izv�l�jos veselus skait�us
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


/********TESTA PL�NS*********************************************************
  G14  |   Ievade - funckij� 'izmest()'           Prog.v�lam� reakcija        Rezult�ts C++

            18 83 42 67 3 3 4 3                   18 83 42 67 3 3 3             +
            (ievada - 3)

            18 83 42 67 3 3 4 3                   Nebija izv�l�ta t�da          +
            (ievade - 1)                          v�rt�ba, lai veiktu dz��anu.

            18 83 42 67 3 3 4 3                   18 83                         +
            (ievade - 83)

            5 (ievade - 3)                        Nebija izv�l�ta t�da v�rt�ba, lai veiktu dz��anu.          +

- Izsaucot funckiju del()(izdz�st visus elementus) = Visi elementi ir izdz�sti!

- Izsaucot funckiju add()(pievienojot elementu) = 18 83 42 67 + add() (ievade - 3) = 18 83 42 67 3 (izvade notiek, izsaucot funckiju print())

*******************************************************************************/
