#include<iostream>
#include"lvtocon.h"
#include"gglink.cpp"
//neizdevu�ais m��in�jums
using namespace std;

struct elem {
    int value;
    elem *next;
};
void izmest (elem *s);

int main() {
    elem *start=NULL, *last;
    int a[4]={5,6,7,8}; // k� noteikta tipa v�rt�bas izv�l�jos veselus skait�us
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
