/*******************
�is ir testa projekts
Autors: Andris Lapi�� al18011
Izveidoja: 22.05.2019
********************/

#include<iostream>
#include "exception.h"
#include"lvtocon.h"
using namespace std;

const int N = 4;

void test1() {
    cout << "Test 1" << endl;
    elem *start=NULL, *last;
    int a[N]={1,2,3,4}; // k� noteikta tipa v�rt�bas izv�l�jos veselus skait�us
    for(int i=0;i<N;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }

    char n = 'a';
    //cout << "Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: ";
    //cin >> n;

    try {
        if(!izmest(start,n)) {
            throw "1";
        } else if (izmest(start,n)) {
            throw "0";
        } else {
            throw "error: burts";
        }
    } catch(const char* msg){
        cout<<msg<<endl;
    }

    /*
    elem *p = new elem;
    p=start;
    while(p!=NULL){
        p=p->next;
        delete start;
        start=p;
    }
    delete start;
    */
}

void test2() {
    cout << "Test 2" << endl;
    elem *start=NULL, *last;
    int a[N]={2,2,2,2};
    for(int i=0;i<N;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }

    int n = 2;
    //cout << "Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: ";
    //cin >> n;

    if(izmest(start,n)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    /*
    elem *p = new elem;
    p=start;
    while(p!=NULL){
        p=p->next;
        delete start;
        start=p;
    }
    delete start;
    */
}

void test3() {
    cout << "Test 3" << endl;
    elem *start=NULL, *last;
    int a[N]={4,3,2,4};
    for(int i=0;i<N;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }

    int n = 4;
    //cout << "Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: ";
    //cin >> n;

    if(izmest(start,n)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    /*
    elem *p = new elem;
    p=start;
    while(p!=NULL){
        p=p->next;
        delete start;
        start=p;
    }
    delete start;
    */
}
void test4() {
    cout << "Test 4" << endl;
    elem *start=NULL, *last;
    int a[N]={55,22,321,22};
    for(int i=0;i<N;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }

    int n = 22;
    //cout << "Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: ";
    //cin >> n;

    if(izmest(start,n)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    /*
    elem *p = new elem;
    p=start;
    while(p!=NULL){
        p=p->next;
        delete start;
        start=p;
    }
    delete start;
    */
}

int main()
{
    test1();
    test2();
    test3();
    test4();

    return 0;
}
/*******************************Testa Pl�ns**********************************************************V�lam� reakcija
   Test 1
Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: 3                +
Veiksm�ga programmas izpilde!
   Test 2
Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: 2                +
Veiksm�ga programmas izpilde!
   Test 3
Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: 6                +
Nebija izv�l�ta t�da v�rt�ba, lai veiktu dz��anu.
   Test 4
Izv�laties skaitli(elementu) no saraksta, no kura s�kot skaist�t, izmest p�r�jos elemntus: 2                +
Nebija izv�l�ta t�da v�rt�ba, lai veiktu dz��anu.
*******************************************/
