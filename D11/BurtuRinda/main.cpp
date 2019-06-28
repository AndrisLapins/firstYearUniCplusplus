/*****************
main.cpp - D uzdevuma main funkcija
Autors - Andris Lapiņš
Izveidots: 04/12/18
D11. Izveidot klasi ""Burtu rinda"" (queue, pa vienu pusi ieliek, pa
otru izòem!), kurâ glabâjas masîvs ar burtiem (char) garumâ pieci un
rindas elementu skaits. Klasei izveidot ðâdas metodes:
(1) konstruktors,
(2) destruktors, kurð paziòo par objekta likvidçðanu un likvidçto
elementu skaitu (ja likvidçðanas brîdî rinda nav tukða),
(3) metode""enqueue"", kas pievieno rindai elementu, ja tâ nav pilna,
(4)metode ""dequeue"", kas izòem no rindas elementu un atgrieþ tâ vçrtîbu,
(5) metode ""Count"", kas atgrieþ elementu skaitu rindâ,
6) metode ""IsEmpty"", kas noskaidro, vai rinda ir tukða.
Pirms uzdevuma veikðanas precîzi noskaidrot, ko nozîmç jçdziens rinda (queue).
*****************/
#include <iostream>
#include "BurtuRinda.h"
//#include "lvtocon.h"

using  namespace std;

int main()
{
    int nMain = 0;
    int sk;
    char v;
    char deq;
    bool atb;
    bool enqAtb;

    BurtuRinda piem;

    int okEnq;
    do {
        cout << "#Ievadiet rinda jaunu burtu: ";
        cin >> v;
        enqAtb = piem.enqueue(v);
        nMain++;
        sk = piem.Count();
        cout << "Rinda burtu skaits ir: " << sk << endl;
        cout << "Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): ";
        cin >> okEnq;
    } while (okEnq == 1 && enqAtb == true && nMain < 5);

    if (enqAtb == false || nMain >= 5) {
        cout << "Rinda ir pilna. Nevar pievienot papildus burtus." << endl;
    }

    int okDeq;
    do {
        deq = piem.dequeue();
        if (deq == ' ') {
            cout << "Rinda ir tuksa. Nebija, ko izmest ara." << endl;
            break;
        } else {
            cout << "#Dequeue vertiba: " << deq << endl;
        }
        cout << "Vai vel velaties izmantot dequeue (1) vai nee (0): ";
        cin >> okDeq;
    } while (okDeq == 1 && deq != ' ');

    sk = piem.Count();
    cout << "Rinda burtu skaits ir: " << sk << endl;

    atb = piem.IsEmpty();
    if (atb) {
        cout << "Rinda ir tuksa." << endl;
    } else {
        cout << "Rinda nav tuksa." << endl;
    }

    return 0;
}



/******************************************************************************************************
Programmas vçlamâ reakcija
--------------------------
#Ievadiet rinda jaunu burtu: q
Rinda burtu skaits ir: 1
Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): 1
#Ievadiet rinda jaunu burtu: w
Rinda burtu skaits ir: 2
Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): 1
#Ievadiet rinda jaunu burtu: e
Rinda burtu skaits ir: 3
Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): o
#Dequeue vertiba: q
Vai vel velaties izmantot dequeue (1) vai nee (0): Rinda burtu skaits ir: 2
Rinda nav tuksa.
Burtu rinda ir iznicinata. Elementu skaits rinda bija: 2
**********************************************************
Rezultâts C++
------------
#Ievadiet rinda jaunu burtu: q
Rinda burtu skaits ir: 1
Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): 1
#Ievadiet rinda jaunu burtu: w
Rinda burtu skaits ir: 2
Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): 1
#Ievadiet rinda jaunu burtu: e
Rinda burtu skaits ir: 3
Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): o
#Dequeue vertiba: q
Vai vel velaties izmantot dequeue (1) vai nee (0): Rinda burtu skaits ir: 2
Rinda nav tuksa.
Burtu rinda ir iznicinata. Elementu skaits rinda bija: 2
********************************************************************************************************/
