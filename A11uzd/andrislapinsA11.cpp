/*****************
Andris Lapi��, al18011
A11. Ar virsot�u koordin�t�m dots trijst�ris. Izr��in�t t� perimetru un
laukumu.
Programma izveidota: 2018/09/16
*****************/
#include <iostream>
#include <stdlib.h> //lai ieg�tu funkciju abs()
#include <math.h>  //lai ieg�tu funkciju sqrt()
#include "lvfriendly.h"

using namespace std;

int main ()
{

    int ok;

    do {

        float x1, x2, x3, y1, y2, y3;

        cout << "�� programma apr��in�s trijst�ra laukumu un perimetru p�c ievad�taj�m v�rt�b�m." << endl;
        cout << "Defin�t koordin�tas (x un y) pirmajai virsotnei: \n";
        cout << "x1: ";
        cin >> x1;
        cout <<"y1: ";
        cin >> y1;

        cout << "Defin�t koordin�tas (x un y) otrajai virsotnei: \n";
        cout << "x2: ";
        cin >> x2;
        cout <<"y2: ";
        cin >> y2;

        cout << "Defin�t koordin�tas (x un y) tre�ajai virsotnei: \n";
        cout << "x3: ";
        cin >> x3;
        cout <<"y3: ";
        cin >> y3;

            // Ja tiek ievad�ts nepareizs datu tips, tiek izmesta k��da un l�gts s�kt ievadi no s�kuma.
            if (!cin.good())
            {
                cout << "\n\nK��da! Ievad�ts tika simbols vai burts.\n\n";
                cin.clear();
                cout.clear();
                cin.ignore(1000,'\n'); // atbr�vot cin st�vokli
            } else {


        // Laukuma apr��in��ana
        float laukums;
        laukums = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
        laukums = laukums / 2;
        laukums = abs(laukums);
        cout << "Trijst�ra laukums: " << laukums << endl;

        // Perimetra malu apr��in��ana
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

        // Perimetra apr��in��ana
        perimetrs = mala1 + mala2 + mala3;
        cout << "Perimetrs: " << perimetrs << endl;


            }

        cout << "Vai turpin�t (1), vai beigt programmu (0)?" << endl;
        cin >> ok;
        cout << endl;
    } while (ok == 1);


    return 0;
}





/******************
Izveidot programmu gan C++, gan JavaScript. Ievadot lo�iski nepareizus
datus, programmai j�izdod atbilsto�s pazi�ojums. J�b�t iesp�jai
programmu izpild�t atk�rtoti. Atr�dot programmu, j�atr�da
   a) programmas teksts,
   b) testa piem�ri,
   c) programma darb�b�.
Prec�z�kas pras�bas sk. Laboratorijas darbu noteikumos.

A11. Ar virsot�u koordin�t�m dots trijst�ris. Izr��in�t t� perimetru un
laukumu.
*****************/

/******************************************************
    Ievads | Programmas v�lam� reakcija | Rezult�ts C++
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
    x1: k      "K��da! Ievad�ts tika             +
    y1:        simbols vai burts."
    x2:
    y2:
    x3:
    y3:

********************************************************/
