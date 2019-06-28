#include<iostream>
#include<forward_list>
#include"galvfjaheader.h"
#include"lvtocon.h"
using namespace std;

forward_list<int> flist;
//forward_list<int> flistmain;
int cnt = 0; //Lai noteiktu prasîtâ "m" skaitïa bieþumu un izmantotu to "print" funckijâ
int m; //Prasîtais funckijas skaitlis deklarçts ðeit priekð tâ, lai tâ vçrtîbu varçtu atkârtoti izvadît uz monitora

void List::izmest() {
    int flag=0; //Izamntots priekð tâ, lai noteiktu, vai ir jau iepriekð iterâcijâ novçrots prasîtais skaitlis vai nç
    cout << "Ievadiet veselu skaitli, kuru vçlaties saglabât pçc dzçðanas, sekojot no ðî skaitïa pirmâs parâdîðanâs: ";
    cin >> m;

    forward_list<int> :: iterator it = flist.before_begin();
    forward_list<int> :: iterator itcheck = flist.begin(); //Tika izvedots otrs iterators, lai bûtu iespçjams
                                                           //noteikt nâkamâ elementa vçrtîbu pçc "bâzes" iteratora

    for (auto&itr : flist) { //Tiek veikta uzskaite par to, cik reizes virknç parâdâs prasîtais skaitlis
        if (itr == m) {
            cnt++;
        }
    }

    for (auto&itr : flist) { //Funkcija, kas veic prasîto darbîbu
        if (*it == m && flag==0 && *itcheck != m) {
            flag=1;
            flist.erase_after(it);
        } else if(*it == m && flag==1 && *itcheck == m) {
            ++it;
            ++itcheck;
        } else if (*it == m && flag==1 && *itcheck != m) {
            flist.erase_after(it);
        } else if (*it == m && flag==0 && *itcheck == m) {
            flag=1;
            ++it;
            ++itcheck;
        } else if (*it != m && flag==0 && *itcheck == m) {
            ++it;
            ++itcheck;
        } else if (*it != m && flag==0 && *itcheck != m) {
            ++it;
            ++itcheck;
        } else if (*it == m && flag==1 && itcheck == flist.end()) {
            return;
        }
    }

    if (flag==0) { // Gadîjums, kad prasîtais skaitlis netika atrasts nemaz
       cout << endl <<"Nebija izvçlçta tâda vçrtîba, lai veiktu dzçðanu." << endl;
    }
    cout << endl;
}

void List::add() {
    int ok, n;
    do {
        cout << "Lûdzu, pievienojiet sarakstam jaunu veselu skaitli: ";
        cin >> n;
        auto before_end = flist.before_begin();
        for (auto& _ : flist) ++before_end; //Tiek pâriets lîdz pçdçjam râdîtâjam virknç
        flist.insert_after(before_end, n);
        cout << "Vai vçlaties turpinât pievienot vai beigt? (1 vai 0): ";
        cin >> ok;
    } while (ok == 1);
}

void List::del() {
    flist.clear();
    cout << "Visi elementi ir izdzçsti!" << endl;
}

void List::print() {
    ///if (flist.empty()) throw::string("Saraksts ir tukðs");
    cout << "Print: ";
    for (int&a : flist) cout << a << " ";
    while (cnt > 1) { //Pçc prasîtâ skaitïa bieþuma tiek izprintçta jaunizveidotâ virknîte
        cout << m << " ";
        cnt--;
    }
    cout << endl;
}
