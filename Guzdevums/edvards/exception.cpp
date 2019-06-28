#include<iostream>
#include "exception.h"

bool izmest(elem *node, int info) {
    int flag = 0; // Izmantoju 'flag' main�go, lai noteiktu, vai iepriek� iter�cij� jau bija sastopams pras�tais skaitlis
    elem *p = node;
    while (p!=NULL) {
        if (p->value == info && flag==0) {
            node = p; //saglab�ju r�d�t�ju, kas atrodas pirms pa�reiz�j� 'p', lai tam sniegtu elemnta r�d�t�ju p�c 'p'
            p=p->next;
            flag = 1;
        } else if (p->value != info && flag==1) {
            node->next = p->next; //padodu elementam pirms 'p' elementa atra�an�s vietu, kas atrodas p�c 'p'
            delete p;
            p = node->next;
        } else if (p->value == info && flag==1) {
            node = p;
            p=p->next;
        } else if (p->value != info && flag==0) {
            p=p->next;
        }
    }
    if (flag==1) { // Gad�jums, kad pras�tais skaitlis tika atrasts
       return true;
    } else {
        return false;
    }
}
