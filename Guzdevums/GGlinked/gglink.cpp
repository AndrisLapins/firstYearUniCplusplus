#include<iostream>
using namespace std;

struct elem2 {
    int value;
    elem2 *next;
};
void izmest(*s) {
    int n;
    cout << "Izv�laties skaitli(elementu) no saraksta, kuru izmest: ";
    cin >> n;
    int flag = 0; // Izmantoju 'flag' main�go, lai noteiktu, vai iepriek� iter�cij� jau bija sastopams pras�tais skaitlis
    elem2 *p = s;
    while (p!=NULL) {
        if (p->value == n && flag==0) {
            s = p; //saglab�ju r�d�t�ju, kas atrodas pirms pa�reiz�j� 'p', lai tam sniegtu elemnta r�d�t�ju p�c 'p'
            p=p->next;
            flag = 1;
        } else if (p->value != n && flag==1) {
            s->next = p->next; //padodu elementam pirms 'p' elementa atra�an�s vietu, kas atrodas p�c 'p'
            delete p;
            p = s->next;
        } else if (p->value == n && flag==1) {
            s = p;
            p=p->next;
        } else if (p->value != n && flag==0) {
            p=p->next;
        }
    }
    if (flag==0) { // Gad�jums, kad pras�tais skaitlis netika atrasts
       cout << "Nebija izv�l�ta t�da v�rt�ba, lai veiktu dz��anu." << endl;
    }
}
