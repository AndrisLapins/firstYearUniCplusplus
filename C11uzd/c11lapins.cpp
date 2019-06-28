/*****************
Andris Lapiòð, al18011
C11. Dotas divas (zema lîmeòa) simbolu virknes  a un b (sastâv no
cipariem un neobligâti mînusa zîmes), kas reprezentç divus veselus
skaitïus. Izveidot funkciju, kas izveido treðo simbolu virkni c, kas
reprezentç skaitli un ir simbolu virkòu a un b reprezentçto skaitïu
summa. Saskaitîðana vai atòemðana jâveic pa vienam ciparam (kâ to dara
uz papîra). Funkcijai jâspçj apstrâdât simbolu virknes lîdz garumam 100
ieskaitot.
Programma izveidota: 2018/10/29
Pçdçjo reizi modificçta: ---------
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

        cout << "Summa no ðiem skaitïiem iznâk: " << aprekins(a, b) << endl;








        //cout << strlen(a);

























        cout << "\nIevadiet (1), lai atkârtotu programmu. Ievadiet (0), lai beigtu programmu: ";
        cin >> ok;
    } while (ok);

}





/******************************************************************************************************
    Ievads      | Programmas vçlamâ reakcija         | Rezultâts C++
********************************************************************************************************/
