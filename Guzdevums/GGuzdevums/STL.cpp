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
Autors: Andris Lapiòð al180111
Prog. izveidota: 18.05.2019

GG ir tas pats uzdevums, kas G, bet tâ risinâjums (a) jâpapildina ar divâm lietâm:
x) vismaz viena no datu pârbaudçm jârealizç, izmantojot izòçmumsituâciju apstrâdes (exception handling) mehânismu,
y) vismaz viena funkcija (vçlams, galvenâ) ir jânotestç, izmantojot vienîbtestçðanu, kur attiecîgâ funkcija bûtu jâpârbauda uz vismaz trîs daþâdiem nosacîjumiem; ðim nolûkam, kâ minimums, ir nepiecieðams (1) ðo funkciju iznest ârâ citâ failâ (nekâ funkcija main), (2) izveidot otru projektu speciâli ðîs funkcijâs testçðanai (tâtad, kopâ bûs divi projekti, parastais, kas izmantos funkciju, otrais, kas testçs). Papildus norâde: ðâdam vienîbtestçðanas projektam daïçji atbilst iepriekðçjâ semestra pçdçjais laboratorijas darbs (ar klasçm) ar cieti iekodçtu main funkciju.
*************************************************
Izveidot programmu valodâ C++, kas ïauj izveidot vienvirziena saistîto
sarakstu (izmantojot dinamiskâs datu struktûras), kurâ glabâjas noteikta
tipa vçrtîbas. Jâbût  paredzçtai iespçjai sarakstu papildinât ar jaunu
elementu (pielikt elementu saraksta galâ), izdrukât sarakstu, iznîcinât
sarakstu. Bez tam jâuzraksta funkcija, kura aprakstîta zemâk. Iznîcinot
saraksta elementus, korekti jâatbrîvo izdalîtâ atmiòa. Galvenajâ
programmâ:
   a) jâbût iespçjai ievadît saraksta elementus (izveidot patvaïîgu
sarakstu),
   b) jâpielieto uzrakstîtâ funkcija sarakstam,
   c) jâizdrukâ saraksts pçc funkcijas darbîbas.
   d) beigâs jâiznîcina saraksts (lietojot delete).
Sîkâkas prasîbas sk. Laboratorijas darbu noteikumos.
G14. Uzrakstît funkciju, kas izmet no saraksta tos elementus, kas seko
aiz elementa ar vçrtîbu n un kuri nav vienâdi ar n.
****************/
