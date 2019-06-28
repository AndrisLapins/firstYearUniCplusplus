#include<iostream>
using namespace std;

struct elem2 {
    int value;
    elem2 *next;
};
void izmest(*s) {
    int n;
    cout << "Izvçlaties skaitli(elementu) no saraksta, kuru izmest: ";
    cin >> n;
    int flag = 0; // Izmantoju 'flag' mainîgo, lai noteiktu, vai iepriekð iterâcijâ jau bija sastopams prasîtais skaitlis
    elem2 *p = s;
    while (p!=NULL) {
        if (p->value == n && flag==0) {
            s = p; //saglabâju râdîtâju, kas atrodas pirms paðreizçjâ 'p', lai tam sniegtu elemnta râdîtâju pçc 'p'
            p=p->next;
            flag = 1;
        } else if (p->value != n && flag==1) {
            s->next = p->next; //padodu elementam pirms 'p' elementa atraðanâs vietu, kas atrodas pçc 'p'
            delete p;
            p = s->next;
        } else if (p->value == n && flag==1) {
            s = p;
            p=p->next;
        } else if (p->value != n && flag==0) {
            p=p->next;
        }
    }
    if (flag==0) { // Gadîjums, kad prasîtais skaitlis netika atrasts
       cout << "Nebija izvçlçta tâda vçrtîba, lai veiktu dzçðanu." << endl;
    }
}
