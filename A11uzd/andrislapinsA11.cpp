/*****************
Andris Lapiòð, al18011
A11. Ar virsotòu koordinâtçm dots trijstûris. Izrçíinât tâ perimetru un
laukumu.
Programma izveidota: 2018/09/16
*****************/
#include <iostream>
#include <stdlib.h> //lai iegûtu funkciju abs()
#include <math.h>  //lai iegûtu funkciju sqrt()
#include "lvfriendly.h"

using namespace std;

int main ()
{

    int ok;

    do {

        float x1, x2, x3, y1, y2, y3;

        cout << "Ðî programma aprçíinâs trijstûra laukumu un perimetru pçc ievadîtajâm vçrtîbâm." << endl;
        cout << "Definçt koordinâtas (x un y) pirmajai virsotnei: \n";
        cout << "x1: ";
        cin >> x1;
        cout <<"y1: ";
        cin >> y1;

        cout << "Definçt koordinâtas (x un y) otrajai virsotnei: \n";
        cout << "x2: ";
        cin >> x2;
        cout <<"y2: ";
        cin >> y2;

        cout << "Definçt koordinâtas (x un y) treðajai virsotnei: \n";
        cout << "x3: ";
        cin >> x3;
        cout <<"y3: ";
        cin >> y3;

            // Ja tiek ievadîts nepareizs datu tips, tiek izmesta kïûda un lûgts sâkt ievadi no sâkuma.
            if (!cin.good())
            {
                cout << "\n\nKïûda! Ievadîts tika simbols vai burts.\n\n";
                cin.clear();
                cout.clear();
                cin.ignore(1000,'\n'); // atbrîvot cin stâvokli
            } else {


        // Laukuma aprçíinâðana
        float laukums;
        laukums = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
        laukums = laukums / 2;
        laukums = abs(laukums);
        cout << "Trijstûra laukums: " << laukums << endl;

        // Perimetra malu aprçíinâðana
        float perimetrs;
        float mala1, mala2, mala3;
        mala1 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        //mala1 = abs(mala1);
        mala1 = sqrt(mala1);

        mala2 = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
        //mala2 = abs(mala2);
        mala2 = sqrt(mala2);

        mala3 = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
        //mala3 = abs(mala3);
        mala3 = sqrt(mala3);

        // Perimetra aprçíinâðana
        perimetrs = mala1 + mala2 + mala3;
        cout << "Perimetrs: " << perimetrs << endl;


            }

        cout << "Vai turpinât (1), vai beigt programmu (0)?" << endl;
        cin >> ok;
        cout << endl;
    } while (ok == 1);


    return 0;
}





/******************
Izveidot programmu gan C++, gan JavaScript. Ievadot loìiski nepareizus
datus, programmai jâizdod atbilstoðs paziòojums. Jâbût iespçjai
programmu izpildît atkârtoti. Atrâdot programmu, jâatrâda
   a) programmas teksts,
   b) testa piemçri,
   c) programma darbîbâ.
Precîzâkas prasîbas sk. Laboratorijas darbu noteikumos.

A11. Ar virsotòu koordinâtçm dots trijstûris. Izrçíinât tâ perimetru un
laukumu.
*****************/

/******************************************************
    Ievads | Programmas vçlamâ reakcija | Rezultâts C++
    ---------------------------------------------------
    x1: 10      "Laukums: 200"                  + https://www.triangle-calculator.com/?what=vc
    y1: 10      "Perimetrs: 68.2843"            +
    x2: 10
    y2: 30
    x3: 30
    y3: 10
    ---------------------------------------------------
    x1: -10      "Laukums: 800"                  +
    y1: 10       "Perimetrs: 136.569"            +
    x2: -10
    y2: -30
    x3: 30
    y3: 10
    ----------------------------------------------------
    x1: k      "Kïûda! Ievadîts tika             +
    y1:        simbols vai burts."
    x2:
    y2:
    x3:
    y3:

********************************************************/
