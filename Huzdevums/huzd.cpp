/// Darba autors: Andris Lapins, al18011
/// Darbs izveidots: 05/05/2019

/*
Iespçjami uzlabojumi:
1. nomainît mainîgo nosaukumus uz kaut ko jçdzîgâku
2. izmantot remove() fciju faila dzçðanai
2a. vai arî faila pârdçvçsânai ar remove()

*/

#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
#include "lvfriendly.h"
using namespace std;

int year, gads; // angliskie uzrakstîtitie mainîgie tiek izmantoti tikai jaunu komponenðu ievietoðanai
int month, menesis;
int day, diena;
int stat, statuss;
int delflag = -1; // tiek izmnatots dzest() funkcijâ, lai saprastu kuros ierakstos atrodas statuss 0
list <int> stat0; // ðeit glabâju indeksus (pçc kârtîbas failâ), kuri pieder ierakstiem ar statusu 0
list <int> :: iterator it;
int delit = 0;
int printi; // lai izdrukâtu indeksus funckijâ print()
int chflag; // lai atzimçtu - vai konkrçtais ieraksts bûs jâizlaiþ, kad drukâ jaunu failu (veids kâ veikt ierakstu dzçðanu)

void drukat (ostream &fout, int year, int month, int day, int stat) // funkcija datu ievietoðanai programmas sâkumâ
{
    fout.write((char*)&year,sizeof(int));
    fout.write((char*)&month,sizeof(int));
    fout.write((char*)&day,sizeof(int));
    fout.write((char*)&stat,sizeof(int));
}
void drukatchange (ostream &fout) // funckija, kas pieòem statusa izmaiòu izvçlçtajâ komponentç
{
    fout.write((char*)&gads,sizeof(int));
    fout.write((char*)&menesis,sizeof(int));
    fout.write((char*)&diena,sizeof(int));
    fout.write((char*)&statuss,sizeof(int));
}
void drukatdel (ostream &fout)
{
    chflag = 0;
    for(it = stat0.begin(); it != stat0.end(); ++it) // cikls, kas pârbauda paðreizçjais ieraksta 'indekss' atbilst indeksa numuram sarakstâ
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
    "Mçnesis: " << menesis << " " <<
    "Diena: " << diena << " " <<
    "Statuss: " << statuss
    << endl;
    printi++;
}
bool check() // funckija, kas pârbauda - vai jaunais datums ir vienâds ar kâdu jau eksistçjoðu failâ
{
    if (year == gads && month == menesis
    && day == diena) {
        return true;
    } else {
        return false;
    }
}
int dzest(istream &fin) // padod komponentes indeksu, lai ievietotu to sarakstâ un vçlâk 'izdzçstu'
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
/// Ievietojam datus failâ
    int ok;
    do {
        ifstream fileread ("personas.bin");
        ofstream filewrite;
        filewrite.open("personas.bin", ios::app);

        int flagcheck = 0;
        cout << "Ievadiet gadu: ";
        cin >> year;
        cout << "Ievadiet mçnesi (formâtâ '5', nevis '05' vai 'maijs'): ";
        cin >> month;
        cout << "Ievadiet dienu: ";
        cin >> day;
        cout << "Ievadiet statusu (1 vai 0): ";
        cin >> stat;

/// Pârbaudu vai neatkârtojas dati. Ja jâ, tad izmetu paziòojumu
        while (lasit(fileread)) {
            if (check()) {
                flagcheck = 1;
            }
        }
        fileread.close();
        if (flagcheck == 0) {
            drukat(filewrite, year, month, day, stat);
        } else {
            cout << "Ðâds datums jau eksistç!" << endl;
        }
        cout << "Vai vçlaties turpinât ievadît datumus? (1 vai 0): ";
        cin >> ok;
        filewrite.close();
    } while (ok == 1);

/// Datu printçðana
    printi = 0;
    ifstream fileprint ("personas.bin");
    while (lasit(fileprint)) print();
    fileprint.close();

/// Statusa maiòa
    int whichrecord;
    ifstream filereadchange ("personas.bin");
    ofstream filewritechange ("personasMod.bin");
    cout << "Kuram ierakstam vçlaties mainît statusu (loìiskâ dzçðana)(no 0 lîdz " << printi-1 << "): "; // .. kâ ierakstu skaitu
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
    /// Pârrakstu atpakaï uz pamata failu personas.bin
    ifstream filereadchangeMod ("personasMod.bin");
    ofstream filewritechangeMod ("personas.bin");
    while (lasit(filereadchangeMod)) drukatchange(filewritechangeMod);
    filewritechangeMod.close();
    filereadchangeMod.close();
/// Datu printçðana
    printi = 0;
    cout << "Statusu izmaiòu printçðana: " << endl;
    ifstream fileprint3 ("personas.bin");
    while (lasit(fileprint3)) print();
    fileprint3.close();

    int yes;
    cout << "Vai vçlaties veikt datu fizisku dzçðanu?(dzçst kompontentes ar statusu 0)-(1 vai 0): ";
    cin >> yes;
    if (yes == 1) {
    /// Datu dzçðanas process
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
    /// Pârrakstu atpakaï uz pamata failu personas.bin
    ifstream filereaddelMod ("personasMod.bin");
    ofstream filewritedelMod ("personas.bin");
    while (lasit(filereaddelMod)) drukatdel(filewritedelMod);
    filewritedelMod.close();
    filereaddelMod.close();

/// Datu printçðana
    printi = 0;
    cout << "Printçðana pçc fiziskâs dzçðanas: " << endl;
    ifstream fileprint4 ("personas.bin"); /// pârdçvçt visus fstream uz nozîmîgâku nosaukumu
    while (lasit(fileprint4)) print();
    fileprint4.close();
    }

    cout << "Programmas beigas!" << endl;
    return 0;
}

/*******************************************************************
Izveidot programmu valodâ C++.  Ar faila komponenti tiek saprasts
fiksçta garuma ieraksts. Sîkâkâs prasîbas sk. Laboratorijas darbu
noteikumos.

H12. Uzrakstît programmu, kas ïauj izveidot un labot binâru failu, kura
glabâjas datumi, un kura ieraksta struktûra ir sekojoða: gads (int),
mçnesis (int), diena (int), ieraksta statuss (0 vai 1). Programmai katrs
jauns ieraksts jâieliek faila beigâs. Ja failâ tâds datums jau eksistç,
tas nav jâpieliek. Jâparedz iespçja (1) izmest faila komponenti (loìiski
atzîmçjot kâ izmestu), (2) izdrukât failâ esoðos datumus uz ekrâna, (3)
izmest loìiski izmestas komponentes fiziski.
********************************************************************/
/**************** TESTA PLÂNS ***************************************
(1.)Ievade:(Fails vçl nav izveidots)
    Ievadiet gadu: 1999
    Ievadiet mçnesi (formâtâ '5', nevis '05' vai 'maijs'): 5
    Ievadiet dienu: 30
    Ievadiet statusu (1 vai 0): 1
    Vai vçlaties turpinât ievadît datumus? (1 vai 0): 1
    Ievadiet gadu: 2000
    Ievadiet mçnesi (formâtâ '5', nevis '05' vai 'maijs'): 3
    Ievadiet dienu: 13
    Ievadiet statusu (1 vai 0): 0
    Vai vçlaties turpinât ievadît datumus? (1 vai 0): 1
    Ievadiet gadu: 2001
    Ievadiet mçnesi (formâtâ '5', nevis '05' vai 'maijs'): 10
    Ievadiet dienu: 4
    Ievadiet statusu (1 vai 0): 0
    Vai vçlaties turpinât ievadît datumus? (1 vai 0): 0

    (Izvade)
    0. Gads: 1999 Mçnesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 Mçnesis: 3 Diena: 13 Statuss: 0
    2. Gads: 2001 Mçnesis: 10 Diena: 4 Statuss: 0
    Kuram ierakstam vçlaties mainît statusu (loìiskâ dzçðana)(no 0 lîdz 2): 1
    Statusu izmaiòu printçðana:
    0. Gads: 1999 Mçnesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 Mçnesis: 3 Diena: 13 Statuss: 1
    2. Gads: 2001 Mçnesis: 10 Diena: 4 Statuss: 0
    Vai vçlaties veikt datu fizisku dzçðanu?(dzçst kompontentes ar statusu 0)-(1 vai 0): 1
    Printçðana pçc fiziskâs dzçðanas:
    0. Gads: 1999 Mçnesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 Mçnesis: 3 Diena: 13 Statuss: 1
    Programmas beigas!
(2.)Ievade.
    Ievadiet gadu: 1999
    Ievadiet mçnesi (formâtâ '5', nevis '05' vai 'maijs'): 5
    Ievadiet dienu: 30
    Ievadiet statusu (1 vai 0): 1
(!) Ðâds datums jau eksistç!
    Vai vçlaties turpinât ievadît datumus? (1 vai 0): 1
    Ievadiet gadu: 2013
    Ievadiet mçnesi (formâtâ '5', nevis '05' vai 'maijs'): 3
    Ievadiet dienu: 3
    Ievadiet statusu (1 vai 0): 1
    Vai vçlaties turpinât ievadît datumus? (1 vai 0): 1
    Ievadiet gadu: 2013
    Ievadiet mçnesi (formâtâ '5', nevis '05' vai 'maijs'): 3
    Ievadiet dienu: 3
    Ievadiet statusu (1 vai 0): 0
(!) Ðâds datums jau eksistç!
    Vai vçlaties turpinât ievadît datumus? (1 vai 0): 0
    0. Gads: 1999 Mçnesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 Mçnesis: 3 Diena: 13 Statuss: 1
    2. Gads: 2013 Mçnesis: 3 Diena: 3 Statuss: 1
    Kuram ierakstam vçlaties mainît statusu (loìiskâ dzçðana)(no 0 lîdz 2): 1
    Statusu izmaiòu printçðana:
    0. Gads: 1999 Mçnesis: 5 Diena: 30 Statuss: 1
    1. Gads: 2000 Mçnesis: 3 Diena: 13 Statuss: 0
    2. Gads: 2013 Mçnesis: 3 Diena: 3 Statuss: 1
    Vai vçlaties veikt datu fizisku dzçðanu?(dzçst kompontentes ar statusu 0)-(1 vai 0): 0
    Programmas beigas!



***************************************************************************/
