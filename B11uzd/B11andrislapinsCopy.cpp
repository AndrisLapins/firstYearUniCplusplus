/*****************
Andris Lapi��, al18011
B11. Dots natur�lu skait�u interv�ls [m,n]. Izdruk�t visus tos
pirmskait�u p�r��us, kuru starp�ba ir 2 (izmantojot  funkciju, kas
paz�st pirmskaitli).
Programma izveidota: 2018/09/19
Modific�ts: 2018/09/25
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

    //���du mekl��ana
    do {
        int m, n;
        cout << "�� programma apr��in�s visus tos pirmskait�u p�r��us, kuru starp�ba ir 2, starp 2 ievad�tiem natur�lajiem skait�iem." << endl;
        cout << "Ja netiek izmesti rezult�ti, tas noz�m�, ka starp �o interv�lu nav pirmskait�u p�r��u ar starp�bu 2." << endl;
        cout << "Ievadiet pirmo natur�lo skaitli (n): ";
        cin >> n;
        cout << "\nIevadiet otru natur�lo skaitli (m): ";
        cin >> m;

        //Tiek p�rbaud�tas k��du v�rt�bas
        if (m % 1 != 0 || n % 1 != 0 || m == 0 || n == 0 || m < 1 || n < 1 || !cin.good())
        {   cout << "\n\nL�dzu ievadiet tikai natur�lus skait�us! (Skait�i ar komatu, negat�vi skait�i, burti un nulles nav natur�li skait�i)" << endl;
            cin.clear();
            cout.clear();
            cin.ignore(1000,'\n'); // atbr�vot cin st�vokli
        } else if (m == n)
        {   cout << "Skait�i ir vien�di. Neb�s iesp�jams atrast pirmskait�u p�r��us, kuru starp�ba ir 2" << endl;
        } else if (n > m)
        {   cout << "Pirmajam skaitlim interv�l� nevajadz�tu b�t liel�kam." << endl;
        } else {

        cout << "Pirmskait�i, kuru starp�ba ir 2, interv�l� starp " << n << " un " << m << " ir: \n";
        primeN ( n, m ); //Pirmaskait�u funkcijas izsauk�ana

        }

       cout << "\nIevadiet (1), lai atk�rtotu programmu. Ievadiet (0), lai beigtu programmu: ";
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

        //Pirmskait�i, kas atrodas nor�d�taj� interv�l�, tiek ievietoti mas�vos.
        for( int i = x+1; i < y; ++i)
        {
            flag = checkPrimeNumber(i);
                if(flag)
                {
                    //Divos mas�vos, lai var�tu sal�dzin�t v�rt�bas ar starp�bu 2
                    array1[k1] = i;
                    array2[k2] = i;
                    //cout << array1[k1] << endl;

                    k1++;
                    k2++;

                    skaits++;
                }
            }


            //Tiek izr��in�ts vai ir k�ds pras�tais pirmskait�u p�r�tis vai n�
            if (skaits == 0){
                cout << "Nav t�du pirmskait�u p�r��u �aj� interv�l�." << endl;
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
//Tiek atrasti pirmskait�i
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
    Ievads      | Programmas v�lam� reakcija |               Rezult�ts C++
    -----------------------------------------------------------------------------
    2 un 9      3 un 5; 5 un 7;                                 + (Pats izr��in�ju)
    -----------------------------------------------------------------------------
    9 un 2      "Pirmajam skaitlim interv�l�                    +
                nevajadz�tu b�t liel�kam"
    ------------------------------------------------------------------------------
    4 un 5      "Starp�ba starp �iem skait�iem                  +
                pat nav 2!"
    ------------------------------------------------------------------------------
    k un 1      L�dzu ievadiet tikai natur�lus skait�us!        +
                (Skait�i ar komatu, negat�vi skait�i,
                burti un nulles nav natur�li skait�i)"
    ------------------------------------------------------------------------------
    6.5 un 2    L�dzu ievadiet tikai natur�lus skait�us!        +
                (Skait�i ar komatu, negat�vi skait�i,
                burti un nulles nav natur�li skait�i)"
    ------------------------------------------------------------------------------
    5 un 5      "Skait�i ir vien�di. Neb�s iesp�jams atrast     +
                pirmskait�u p�r��us, kuru starp�ba ir 2"
    ------------------------------------------------------------------------------
    -5 un 43    L�dzu ievadiet tikai natur�lus skait�us!        +
                (Skait�i ar komatu, negat�vi skait�i,
                burti un nulles nav natur�li skait�i)"
    ------------------------------------------------------------------------------
    13 un 17    "Nav t�du pirmskait�u p�r��u �aj� interv�l�."   +

********************************************************************************************************/
