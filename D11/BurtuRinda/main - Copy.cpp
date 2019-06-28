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
    int n;
    int sk;
    char v;
    char deq;
    bool atb;

    /*cout << "Ievadiet velamo burtu skaitu rinda (nevar but vairak par 5 elementiem): ";
    do {
        cin >> n;
        if (n > 5 || n < 0)
        {
            cout << "Jus ievadijat nepienemamu rindas garumu. Ludzu, atkartojiet: ";
        }
    } while (n > 5 || n < 0);*/

    BurtuRinda piem();

    int okEnq;
    do {
        cout << "Ievadiet rinda jaunu burtu: ";
        cin >> v;
        enqAtb = piem.enqueue(v);
        cout << "Rakstiet (1), ja velaties turpinat pievienot burtus. Ja ne, tad (0): ";
        cin >> okEnq;
    } while (okEnq == 1 && enqAtb == true)
    if (enqAtb == false) {
        cout << "Rinda ir pilna. Nevar pievienot papildus burtus." << endl;
    }

    int okDeq;
    do {
        deq = piem.dequeue();
        if (deq == ' ') {
            cout << "Rinda ir tuksa. Nebija, ko izmest ara." << endl;
        } else {
            cout << "Dequeue vertiba: " << deq << endl;
        }
        cout << "Vai vel velaties izmantot dequeue (1) vai nee (0): ";
        cin >> okDeq;
    } while (okDeq == 1 || deq == ' ');

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
Ievadiet velamo burtu skaitu rinda (nevar but vairak par 5): 4(ievadita vertiba)
Ievadiet 4 burtus pec izveles:
1: q(ievadita vertiba)
2: w(ievadita vertiba)
3: e(ievadita vertiba)
4: r(ievadita vertiba)
Dequeue vertiba: q
Vertibas pec dequeue metodes veiksanas.
w
e
r
Ievadiet rinda jaunu burtu: t(ievadita vertiba)

Rinda burtu skaits ir: 4
Rinda nav tuksa.
Vertibas pec visu metozu veiksanas.
w
e
r
t
Burtu rinda ir iznicinata. Elementu skaits rinda bija: 4
**********************************************************
Rezultâts C++
------------
Ievadiet velamo burtu skaitu rinda (nevar but vairak par 5): 4
Ievadiet 4 burtus pec izveles:
1: q
2: w
3: e
4: r
Dequeue vertiba: q
Vertibu drukasana:
w
e
r
Ievadiet rinda jaunu burtu: t
Vertibu drukasana:
w
e
r
t
Rinda burtu skaits ir: 4
Rinda nav tuksa.
Vertibu drukasana:
w
e
r
t
Burtu rinda ir iznicinata. Elementu skaits rinda bija: 4
********************************************************************************************************/

///Iedvesmojoties no kursabiedrenes
/******************************************
            TESTA PLANS

---Metode---            ----Darbiba----

Konstruktors            1: q
                        2: w
                        3: e
                        4: r

Destruktors             Burtu rinda ir iznicinata. Elementu skaits rinda bija: 4
  (Ja nebija
   neviena elementa)      Burtu rinda ir iznicinata.

enqueue                 Ievadiet rinda jaunu burtu: t

dequeue                 Dequeue vertiba: q

Count
(pievienoju for ciklu,  Rinda burtu skaits ir: 4
kas printē rindas
vērtības):

IsEmpty                 Rinda nav tuksa.

*******************************************/
