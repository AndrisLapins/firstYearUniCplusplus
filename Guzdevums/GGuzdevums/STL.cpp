#include"galvfjaheader.h"

int main() {
    List first;
    ///try {
    first.add();
        first.print();
        first.izmest();
        first.print();
        first.del();
    ///} catch (string e) {
    ///     cout << e << endl;
    ///}

    return 0;
}

/*****************
Autors: Andris Lapi�� al180111
Prog. izveidota: 18.05.2019

GG ir tas pats uzdevums, kas G, bet t� risin�jums (a) j�papildina ar div�m liet�m:
x) vismaz viena no datu p�rbaud�m j�realiz�, izmantojot iz��mumsitu�ciju apstr�des (exception handling) meh�nismu,
y) vismaz viena funkcija (v�lams, galven�) ir j�notest�, izmantojot vien�btest��anu, kur attiec�g� funkcija b�tu j�p�rbauda uz vismaz tr�s da��diem nosac�jumiem; �im nol�kam, k� minimums, ir nepiecie�ams (1) �o funkciju iznest �r� cit� fail� (nek� funkcija main), (2) izveidot otru projektu speci�li ��s funkcij�s test��anai (t�tad, kop� b�s divi projekti, parastais, kas izmantos funkciju, otrais, kas test�s). Papildus nor�de: ��dam vien�btest��anas projektam da��ji atbilst iepriek��j� semestra p�d�jais laboratorijas darbs (ar klas�m) ar cieti iekod�tu main funkciju.
*************************************************
Izveidot programmu valod� C++, kas �auj izveidot vienvirziena saist�to
sarakstu (izmantojot dinamisk�s datu strukt�ras), kur� glab�jas noteikta
tipa v�rt�bas. J�b�t  paredz�tai iesp�jai sarakstu papildin�t ar jaunu
elementu (pielikt elementu saraksta gal�), izdruk�t sarakstu, izn�cin�t
sarakstu. Bez tam j�uzraksta funkcija, kura aprakst�ta zem�k. Izn�cinot
saraksta elementus, korekti j�atbr�vo izdal�t� atmi�a. Galvenaj�
programm�:
   a) j�b�t iesp�jai ievad�t saraksta elementus (izveidot patva��gu
sarakstu),
   b) j�pielieto uzrakst�t� funkcija sarakstam,
   c) j�izdruk� saraksts p�c funkcijas darb�bas.
   d) beig�s j�izn�cina saraksts (lietojot delete).
S�k�kas pras�bas sk. Laboratorijas darbu noteikumos.
G14. Uzrakst�t funkciju, kas izmet no saraksta tos elementus, kas seko
aiz elementa ar v�rt�bu n un kuri nav vien�di ar n.
****************/
