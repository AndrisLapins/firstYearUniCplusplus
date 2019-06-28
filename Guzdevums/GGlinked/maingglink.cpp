#include<iostream>
#include"lvtocon.h"
#include"gglink.cpp"
//neizdevuðais mçìinâjums
using namespace std;

struct elem {
    int value;
    elem *next;
};
void izmest (elem *s);

int main() {
    elem *start=NULL, *last;
    int a[4]={5,6,7,8}; // kâ noteikta tipa vçrtîbas izvçlçjos veselus skaitïus
    for(int i=0;i<1;i++) {
        elem *p = new elem;
        p->value=a[i];
        p->next=NULL;
        if(start==NULL) start=p;
        else last->next=p;
        last=p;
    }
    izmest(start);




    return 0;
}
