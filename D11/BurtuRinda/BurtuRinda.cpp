// BurtuRinda.cpp - D uzdevuma metodes
//Autors - Andris Lapiòð
//Izveidots: 04/12/18
#include <iostream>
//#include "lvtocon.h"
#include "BurtuRinda.h"

using namespace std;

BurtuRinda::BurtuRinda()
{
    //this->n = n;
    //cout << "Ievadiet " << this->n << " burtus pec izveles:" << endl;
    //for (int i = 0; i < this->n; i++) {
    //    cout << i + 1 << ": ";
     //   cin >> q[i];
    //}
    //q[n] = g;
    //n++;*/
}
BurtuRinda::~BurtuRinda()
{
    cout << "Burtu rinda ir iznicinata. ";
    if (n > 0) {
        cout << "Elementu skaits rinda bija: " << n << endl;
    }
}

bool BurtuRinda::enqueue(char v)
{
    if (n < 5) {
        q[n] = v;
        //cout << "checkN_in_Enq: " << n << endl;
        n++;
        return true;
    } else {
        return false;
    }
    //cout << "checkEnq: " << q[2] << endl;
}

char BurtuRinda::dequeue()
{
    char beigas = ' ';
    char temp0 = q[0];
    char temp;
    if(n > 1) {
        for (int i = 0; i < n; i++)
        {
            temp = q[i+1];
            q[i] = temp;
        }
        q[n-1] = ' ';
        n--;
        //cout << "checkdeq: " << q[0] << endl;
        return temp0;
    } else if(n == 1) {
        q[0] = ' ';
        n--;
        return temp0;
    } else {
        return beigas;
    }
}

int BurtuRinda::Count()
{
    if ( n == 0) {
        cout << "Vertibu drukasana:" << endl;
        for (int i = 0; i < n; i++) {
            cout << q[i] << endl;
        }
    }
    return n;
}

bool BurtuRinda::IsEmpty()
{
    if(n==0){
        return true;
    } else {
        return false;
    }
}






