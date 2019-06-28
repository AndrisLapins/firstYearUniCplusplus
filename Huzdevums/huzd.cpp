/// Darba autors: Andris Lapins, al18011
/// Darbs izveidots: 05/05/2019

/*
Iesp�jami uzlabojumi:
1. nomain�t main�go nosaukumus uz kaut ko j�dz�g�ku
2. izmantot remove() fciju faila dz��anai
2a. vai ar� faila p�rd�v�s�nai ar remove()

*/

#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
#include "lvfriendly.h"
using namespace std;

int year, gads; // angliskie uzrakst�titie main�gie tiek izmantoti tikai jaunu komponen�u ievieto�anai
int month, menesis;
int day, diena;
int stat, statuss;
int delflag = -1; // tiek izmnatots dzest() funkcij�, lai saprastu kuros ierakstos atrodas statuss 0
list <int> stat0; // �eit glab�ju indeksus (p�c k�rt�bas fail�), kuri pieder ierakstiem ar statusu 0
list <int> :: iterator it;
int delit = 0;
int printi; // lai izdruk�tu indeksus funckij� print()
int chflag; // lai atzim�tu - vai konkr�tais ieraksts b�s j�izlai�, kad druk� jaunu failu (veids k� veikt ierakstu dz��anu)

void drukat (ostream &fout, int year, int month, int day, int stat) // funkcija datu ievieto�anai programmas s�kum�
{
    fout.write((char*)&year,sizeof(int));
    fout.write((char*)&month,sizeof(int));
    fout.write((char*)&day,sizeof(int));
    fout.write((char*)&stat,sizeof(int));
}
void drukatchange (ostream &fout) // funckija, kas pie�em statusa izmai�u izv�l�taj� komponent�
{
    fout.write((char*)&gads,sizeof(int));
    fout.write((char*)&menesis,sizeof(int));
    fout.write((char*)&diena,sizeof(int));
    fout.write((char*)&statuss,sizeof(int));
}
void drukatdel (ostream &fout)
{
    chflag = 0;
    for(it = stat0.begin(); it != stat0.end(); ++it) // cikls, kas p�rbauda pa�reiz�jais ieraksta 'indekss' atbilst indeksa numuram sarakst�
    {
        if (*it == delit)
        {
            chflag = 1;
        }
    }
    if (chflag == 0) {
        fout.write((char*)&gads,sizeof(int));
        fout.write((char*)&menesis,sizeof(int));
        fout.write((char*)&diena,sizeof(int));
        fout.write((char*)&statuss,sizeof(int));
    }
    delit++;
}
bool lasit (istream &fin)
{
    fin.read ((char*)&gads,sizeof(int));
    fin.read ((char*)&menesis,sizeof(int));
    fin.read ((char*)&diena,sizeof(int));
    fin.read ((char*)&statuss,sizeof(int));
    return fin.good();
}
void print ()
{
    cout << printi << ". ";
    cout <<
    "Gads: " << gads << " " <<
    "M�nesis: " << menesis << " " <<
    "Diena: " << diena << " " <<
    "Statuss: " << statuss
    << endl;
    printi++;
}
bool check() // funckija, kas p�rbauda - vai jaunais datums ir vien�ds ar k�du jau eksist�jo�u fail�
{
    if (year == gads && month == menesis
    && day == diena) {
        return true;
    } else {
        return false;
    }
}
int dzest(istream &fin) // padod komponentes indeksu, lai ievietotu to sarakst� un v�l�k 'izdz�stu'
{
    delflag++;

    if (statuss == 0)
    {
        return delflag;
    } else {
        return -1;
    }
}

int main()
{
/// Ievietojam datus fail�
    int ok;
    do {
        ifstream fileread ("personas.bin");
        ofstream filewrite;
        filewrite.open("personas.bin", ios::app);

        int flagcheck = 0;
        cout << "Ievadiet gadu: ";
        cin >> year;
        cout << "Ievadiet m�nesi (form�t� '5', nevis '05' vai 'maijs'): ";
        cin >> month;
        cout << "Ievadiet dienu: ";
        cin >> day;
        cout << "Ievadiet statusu (1 vai 0): ";
        cin >> stat;

/// P�rbaudu vai neatk�rtojas dati. Ja j�, tad izmetu pazi�ojumu
        while (lasit(fileread)) {
            if (check()) {
                flagcheck = 1;
            }
        }
        fileread.close();
        if (flagcheck == 0) {
            drukat(filewrite, year, month, day, stat);
        } else {
            cout << "��ds datums jau eksist�!" << endl;
        }
        cout << "Vai v�laties turpin�t ievad�t datumus? (1 vai 0): ";
        cin >> ok;
        filewrite.close();
    } while (ok == 1);

/// Datu print��ana
    printi = 0;
    ifstream fileprint ("personas.bin");
    while (lasit(fileprint)) print();
    fileprint.close();

/// Statusa mai�a
    int whichrecord;
    ifstream filereadchange ("personas.bin");
    ofstream filewritechange ("personasMod.bin");
    cout << "Kuram ierakstam v�laties main�t statusu (lo�isk� dz��ana)(no 0 l�dz " << printi-1 << "): "; // .. k� ierakstu skaitu
    cin >> whichrecord;
    printi = 0;
    while (lasit(filereadchange)) {
        if (printi == whichrecord)
        {
            if (statuss == 1) statuss = 0;
            else if (statuss == 0) statuss = 1;
        }
        drukatchange(filewritechange);
        printi++;
    }
    filewritechange.close();
    filereadchange.close();
    /// P�rrakstu atpaka� uz pamata failu personas.bin
    ifstream filereadchangeMod ("personasMod.bin");
    ofstream filewritechangeMod ("personas.bin");
    while (lasit(filereadchangeMod)) drukatchange(filewritechangeMod);
    filewritechangeMod.close();
    filereadchangeMod.close();
/// Datu print��ana
    printi = 0;
    cout << "Statusu izmai�u print��ana: " << endl;
    ifstream fileprint3 ("personas.bin");
    while (lasit(fileprint3)) print();
    fileprint3.close();

    int yes;
    cout << "Vai v�laties veikt datu fizisku dz��anu?(dz�st kompontentes ar statusu 0)-(1 vai 0): ";
    cin >> yes;
    if (yes == 1) {
    /// Datu dz��anas process
    ifstream filedel ("personas.bin");
    int savedelflag = 0;
    while (lasit(filedel)) {
        savedelflag = dzest(filedel);
        if (savedelflag != -1)
        {
            stat0.push_back(savedelflag);
            //cout << savedelflag << endl;
            savedelflag = 0;
        }
    }
    delflag = 0;
    filedel.close();
    ifstream filereaddel ("personas.bin");
    ofstream filewritedel ("personasMod.bin");
    while (lasit(filereaddel)) drukatdel(filewritedel);
    filewritedel.close();
    filereaddel.close();
    /// P�rrakstu atpaka� uz pamata failu personas.bin
    ifstream filereaddelMod ("personasMod.bin");
    ofstream filewritedelMod ("personas.bin");
    while (lasit(filereaddelMod)) drukatdel(filewritedelMod);
    filewritedelMod.close();
    filereaddelMod.close();

/// Datu print��ana
    printi = 0;
    cout << "Print��ana p�c fizisk�s dz��anas: " << endl;
    ifstream fileprint4 ("personas.bin"); /// p�rd�v�t visus fstream uz noz�m�g�ku nosaukumu
    while (lasit(fileprint4)) print();
    fileprint4.close();
    }

    cout << "Programmas beigas!" << endl;
    return 0;
}

/*******************************************************************
Izveidot programmu valod� C++.  Ar faila komponenti tiek saprasts
fiks�ta garuma ieraksts. S�k�k�s pras�bas sk. Laboratorijas darbu
noteikumos.

H12. Uzrakst�t programmu, kas �auj izveidot un labot bin�ru failu, kura
glab�jas datumi, un kura ieraksta strukt�ra ir sekojo�a: gads (int),
m�nesis (int), diena (int), ieraksta statuss (0 vai 1). Programmai katrs
jauns ieraksts j�ieliek faila beig�s. Ja fail� t�ds datums jau eksist�,
tas nav j�pieliek. J�paredz iesp�ja (1) izmest faila komponenti (lo�iski
atz�m�jot k� izmestu), (2) izdruk�t fail� eso�os datumus uz ekr�na, (3)
izmest lo�iski izmestas komponentes fiziski.
********************************************************************/
/**************** TESTA PL�NS ***************************************
(1.)Ievade:(Fails v�l nav izveidots)
    Ievadiet gadu: 1999
    Ievadiet m�nesi (form�t� '5', nevis '05' vai 'maijs'): 5
    Ievadiet dienu: 30
    Ievadiet statusu (1 vai 0): 1
    Vai v�laties turpin�t ievad�t datumus? (1 vai 0): 1
    Ievadiet gadu: 2000
    Ievadiet m�nesi (form�t� '5', nevis '05' vai 'maijs'): 3
    Ievadiet dienu: 13
    Ievadiet statusu (1 vai 0): 0
    Vai v�laties turpin�t ievad�t datumus? (1 vai 0): 1
    Ievadiet gadu: 2001
    Ievadiet m�nesi (form�t� '5', nevis '05' vai 'maijs'): 10
    Ievadiet dienu: 4
    Ievadiet statusu (1 vai 0): 0
    Vai v�laties turpin�t ievad�t datumus? (1 vai 0): 0

    (Izvade)
    0. Gads: 1999 M�nesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 M�nesis: 3 Diena: 13 Statuss: 0
    2. Gads: 2001 M�nesis: 10 Diena: 4 Statuss: 0
    Kuram ierakstam v�laties main�t statusu (lo�isk� dz��ana)(no 0 l�dz 2): 1
    Statusu izmai�u print��ana:
    0. Gads: 1999 M�nesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 M�nesis: 3 Diena: 13 Statuss: 1
    2. Gads: 2001 M�nesis: 10 Diena: 4 Statuss: 0
    Vai v�laties veikt datu fizisku dz��anu?(dz�st kompontentes ar statusu 0)-(1 vai 0): 1
    Print��ana p�c fizisk�s dz��anas:
    0. Gads: 1999 M�nesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 M�nesis: 3 Diena: 13 Statuss: 1
    Programmas beigas!
(2.)Ievade.
    Ievadiet gadu: 1999
    Ievadiet m�nesi (form�t� '5', nevis '05' vai 'maijs'): 5
    Ievadiet dienu: 30
    Ievadiet statusu (1 vai 0): 1
(!) ��ds datums jau eksist�!
    Vai v�laties turpin�t ievad�t datumus? (1 vai 0): 1
    Ievadiet gadu: 2013
    Ievadiet m�nesi (form�t� '5', nevis '05' vai 'maijs'): 3
    Ievadiet dienu: 3
    Ievadiet statusu (1 vai 0): 1
    Vai v�laties turpin�t ievad�t datumus? (1 vai 0): 1
    Ievadiet gadu: 2013
    Ievadiet m�nesi (form�t� '5', nevis '05' vai 'maijs'): 3
    Ievadiet dienu: 3
    Ievadiet statusu (1 vai 0): 0
(!) ��ds datums jau eksist�!
    Vai v�laties turpin�t ievad�t datumus? (1 vai 0): 0
    0. Gads: 1999 M�nesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 M�nesis: 3 Diena: 13 Statuss: 1
    2. Gads: 2013 M�nesis: 3 Diena: 3 Statuss: 1
    Kuram ierakstam v�laties main�t statusu (lo�isk� dz��ana)(no 0 l�dz 2): 1
    Statusu izmai�u print��ana:
    0. Gads: 1999 M�nesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 M�nesis: 3 Diena: 13 Statuss: 0
    2. Gads: 2013 M�nesis: 3 Diena: 3 Statuss: 1
    Vai v�laties veikt datu fizisku dz��anu?(dz�st kompontentes ar statusu 0)-(1 vai 0): 0
    Programmas beigas!



***************************************************************************/
