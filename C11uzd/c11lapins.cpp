/*****************
Andris Lapi��, al18011
C11. Dotas divas (zema l�me�a) simbolu virknes  a un b (sast�v no
cipariem un neoblig�ti m�nusa z�mes), kas reprezent� divus veselus
skait�us. Izveidot funkciju, kas izveido tre�o simbolu virkni c, kas
reprezent� skaitli un ir simbolu virk�u a un b reprezent�to skait�u
summa. Saskait��ana vai at�em�ana j�veic pa vienam ciparam (k� to dara
uz pap�ra). Funkcijai j�sp�j apstr�d�t simbolu virknes l�dz garumam 100
ieskaitot.
Programma izveidota: 2018/10/29
P�d�jo reizi modific�ta: ---------
*****************/
#include <iostream>
#include "lvfriendly.h"

using namespace std;

int aprekins(int a, int b)
{
    int sizeA = strlen(a);
    int sizeB = strlen(b);

    for (int i = sizeA - 1; i >= 0; i--)
    {

    }

}

int main()
{
    int ok;
    do {
        cout << "Ievadiet pirmo veselo skaitli: ";
        char a[101];
        cin.getline (a, 101);
        cout << a << endl;

        cout << "Ievadiet otro veselo skaitli: ";
        char b[101];
        cin.getline (b, 101);
        cout << b << endl;

        cout << "Summa no �iem skait�iem izn�k: " << aprekins(a, b) << endl;








        //cout << strlen(a);

























        cout << "\nIevadiet (1), lai atk�rtotu programmu. Ievadiet (0), lai beigtu programmu: ";
        cin >> ok;
    } while (ok);

}





/******************************************************************************************************
    Ievads      | Programmas v�lam� reakcija         | Rezult�ts C++
********************************************************************************************************/
