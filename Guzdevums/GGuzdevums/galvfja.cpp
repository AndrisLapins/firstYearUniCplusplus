#include<iostream>
#include<forward_list>
#include"galvfjaheader.h"
#include"lvtocon.h"
using namespace std;

forward_list<int> flist;
//forward_list<int> flistmain;
int cnt = 0; //Lai noteiktu pras�t� "m" skait�a bie�umu un izmantotu to "print" funckij�
int m; //Pras�tais funckijas skaitlis deklar�ts �eit priek� t�, lai t� v�rt�bu var�tu atk�rtoti izvad�t uz monitora

void List::izmest() {
    int flag=0; //Izamntots priek� t�, lai noteiktu, vai ir jau iepriek� iter�cij� nov�rots pras�tais skaitlis vai n�
    cout << "Ievadiet veselu skaitli, kuru v�laties saglab�t p�c dz��anas, sekojot no �� skait�a pirm�s par�d��an�s: ";
    cin >> m;

    forward_list<int> :: iterator it = flist.before_begin();
    forward_list<int> :: iterator itcheck = flist.begin(); //Tika izvedots otrs iterators, lai b�tu iesp�jams
                                                           //noteikt n�kam� elementa v�rt�bu p�c "b�zes" iteratora

    for (auto&itr : flist) { //Tiek veikta uzskaite par to, cik reizes virkn� par�d�s pras�tais skaitlis
        if (itr == m) {
            cnt++;
        }
    }

    for (auto&itr : flist) { //Funkcija, kas veic pras�to darb�bu
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

    if (flag==0) { // Gad�jums, kad pras�tais skaitlis netika atrasts nemaz
       cout << endl <<"Nebija izv�l�ta t�da v�rt�ba, lai veiktu dz��anu." << endl;
    }
    cout << endl;
}

void List::add() {
    int ok, n;
    do {
        cout << "L�dzu, pievienojiet sarakstam jaunu veselu skaitli: ";
        cin >> n;
        auto before_end = flist.before_begin();
        for (auto& _ : flist) ++before_end; //Tiek p�riets l�dz p�d�jam r�d�t�jam virkn�
        flist.insert_after(before_end, n);
        cout << "Vai v�laties turpin�t pievienot vai beigt? (1 vai 0): ";
        cin >> ok;
    } while (ok == 1);
}

void List::del() {
    flist.clear();
    cout << "Visi elementi ir izdz�sti!" << endl;
}

void List::print() {
    ///if (flist.empty()) throw::string("Saraksts ir tuk�s");
    cout << "Print: ";
    for (int&a : flist) cout << a << " ";
    while (cnt > 1) { //P�c pras�t� skait�a bie�uma tiek izprint�ta jaunizveidot� virkn�te
        cout << m << " ";
        cnt--;
    }
    cout << endl;
}
