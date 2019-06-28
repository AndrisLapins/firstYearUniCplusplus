/*****************
Andris Lapiòð, al18011
B11. Dots naturâlu skaitïu intervâls [m,n]. Izdrukât visus tos
pirmskaitïu pârîðus, kuru starpîba ir 2 (izmantojot  funkciju, kas
pazîst pirmskaitli).
Programma izveidota: 2018/09/19
Modificçts: 2018/09/25
*****************/
#include <iostream>
#include "lvfriendly.h"

using namespace std;

void primeN( int, int );
bool checkPrimeNumber( int );//funkcijas prototips
//int checkPrimeNumber2( int );

int main()
{
    int ok;

    //Íïûdu meklçðana
    do {
        int m, n;
        cout << "Ðî programma aprçíinâs visus tos pirmskaitïu pârîðus, kuru starpîba ir 2, starp 2 ievadîtiem naturâlajiem skaitïiem." << endl;
        cout << "Ja netiek izmesti rezultâti, tas nozîmç, ka starp ðo intervâlu nav pirmskaitïu pârîðu ar starpîbu 2." << endl;
        cout << "Ievadiet pirmo naturâlo skaitli (n): ";
        cin >> n;
        cout << "\nIevadiet otru naturâlo skaitli (m): ";
        cin >> m;

        //Tiek pârbaudîtas kïûdu vçrtîbas
        if (m % 1 != 0 || n % 1 != 0 || m == 0 || n == 0 || m < 1 || n < 1 || !cin.good())
        {   cout << "\n\nLûdzu ievadiet tikai naturâlus skaitïus! (Skaitïi ar komatu, negatîvi skaitïi, burti un nulles nav naturâli skaitïi)" << endl;
            cin.clear();
            cout.clear();
            cin.ignore(1000,'\n'); // atbrîvot cin stâvokli
        } else if (m == n)
        {   cout << "Skaitïi ir vienâdi. Nebûs iespçjams atrast pirmskaitïu pârîðus, kuru starpîba ir 2" << endl;
        } else if (n > m)
        {   cout << "Pirmajam skaitlim intervâlâ nevajadzçtu bût lielâkam." << endl;
        } else {

        cout << "Pirmskaitïi, kuru starpîba ir 2, intervâlâ starp " << n << " un " << m << " ir: \n";
        primeN ( n, m ); //Pirmaskaitïu funkcijas izsaukðana

        }

       cout << "\nIevadiet (1), lai atkârtotu programmu. Ievadiet (0), lai beigtu programmu: ";
       cin >> ok;
       cout << endl << endl;

    } while (ok == 1);

    return 0;
}

void primeN (int x, int y)
{
        bool flag;
        int s;

        int *array1 = new int[y];
        int *array2 = new int[y];
        int k1 = 0;
        int k2 = 0;

        int skaits = 0;

        //Pirmskaitïi, kas atrodas norâdîtajâ intervâlâ, tiek ievietoti masîvos.
        for( int i = x+1; i < y; ++i)
        {
            flag = checkPrimeNumber(i);
                if(flag)
                {
                    //Divos masîvos, lai varçtu salîdzinât vçrtîbas ar starpîbu 2
                    array1[k1] = i;
                    array2[k2] = i;
                    //cout << array1[k1] << endl;

                    k1++;
                    k2++;

                    skaits++;
                }
            }


            //Tiek izrçíinâts vai ir kâds prasîtais pirmskaitïu pârîtis vai nç
            if (skaits == 0){
                cout << "Nav tâdu pirmskaitïu pârîðu ðajâ intervâlâ." << endl;
            } else {
                for (int a = 1; a < y; ++a)
                {
                    for (int b = 0; b < y; ++b)
                    {
                        if (array1[a] == array2[b] + 2)
                        {
                            cout << array1[b] << " un " << array2[a] << ";" << endl;
                        }
                    }
                }
    //delete [] array;
            }
}
//Tiek atrasti pirmskaitïi
bool checkPrimeNumber(int n)
{
    //int count = 0;
    bool flag = true;

    if (n < 2)
    {
        flag = false;
        return flag;

    } else {
        for(int j = 2; j <= n/2; ++j)
        {
            if (n%j == 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

/******************************************************************************************************
    Ievads      | Programmas vçlamâ reakcija |               Rezultâts C++
    -----------------------------------------------------------------------------
    2 un 9      3 un 5; 5 un 7;                                 + (Pats izrçíinâju)
    -----------------------------------------------------------------------------
    9 un 2      "Pirmajam skaitlim intervâlâ                    +
                nevajadzçtu bût lielâkam"
    ------------------------------------------------------------------------------
    4 un 5      "Starpîba starp ðiem skaitïiem                  +
                pat nav 2!"
    ------------------------------------------------------------------------------
    k un 1      Lûdzu ievadiet tikai naturâlus skaitïus!        +
                (Skaitïi ar komatu, negatîvi skaitïi,
                burti un nulles nav naturâli skaitïi)"
    ------------------------------------------------------------------------------
    6.5 un 2    Lûdzu ievadiet tikai naturâlus skaitïus!        +
                (Skaitïi ar komatu, negatîvi skaitïi,
                burti un nulles nav naturâli skaitïi)"
    ------------------------------------------------------------------------------
    5 un 5      "Skaitïi ir vienâdi. Nebûs iespçjams atrast     +
                pirmskaitïu pârîðus, kuru starpîba ir 2"
    ------------------------------------------------------------------------------
    -5 un 43    Lûdzu ievadiet tikai naturâlus skaitïus!        +
                (Skaitïi ar komatu, negatîvi skaitïi,
                burti un nulles nav naturâli skaitïi)"
    ------------------------------------------------------------------------------
    13 un 17    "Nav tâdu pirmskaitïu pârîðu ðajâ intervâlâ."   +

********************************************************************************************************/
