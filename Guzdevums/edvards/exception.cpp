#include<iostream>
#include "exception.h"

bool izmest(elem *node, int info) {
    int flag = 0; // Izmantoju 'flag' mainîgo, lai noteiktu, vai iepriekğ iterâcijâ jau bija sastopams prasîtais skaitlis
    elem *p = node;
    while (p!=NULL) {
        if (p->value == info && flag==0) {
            node = p; //saglabâju râdîtâju, kas atrodas pirms pağreizçjâ 'p', lai tam sniegtu elemnta râdîtâju pçc 'p'
            p=p->next;
            flag = 1;
        } else if (p->value != info && flag==1) {
            node->next = p->next; //padodu elementam pirms 'p' elementa atrağanâs vietu, kas atrodas pçc 'p'
            delete p;
            p = node->next;
        } else if (p->value == info && flag==1) {
            node = p;
            p=p->next;
        } else if (p->value != info && flag==0) {
            p=p->next;
        }
    }
    if (flag==1) { // Gadîjums, kad prasîtais skaitlis tika atrasts
       return true;
    } else {
        return false;
    }
}
