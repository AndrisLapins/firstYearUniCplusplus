///Andris Lapiņš, al18011
///Programma izveidota: 24/02/19

///Izveidot programmu valodā C++, kas apstrādā teksta failu secīgā režīmā.
///Dati no faila jānolasa pa vienai rindiņai. Nedrīkst dublēt visa faila
///saturu operatīvajā atmiņā. Sīkākas prasības sk. Laboratorijas darbu
///noteikumos.

///F14. Dots teksta fails, kurā atrodas C++ programmas teksts. Pārbaudīt
///dotajā programmas tekstā atverošo un aizverošo iekavu lietojumu (t.i.,
///vai katrai atverošajai iekavai seko aizverošā, un vai iekavu secība ir
///pieļaujama). Nepieļaujami ir sekojoši gadījumi:  )(   vai  ()) , vai
///((). Drīkst uzskatīt, ka programmas tekstā nav komentāru un ka
///attiecīgie simboli neparādīsies teksta literāļos.

///Risinājums: Pārbaudu tikai nepieļaujamo gadījumu esamību, jo, ja pretējā gadījumā nav tikušas pielaistas kļūdas ar iekavām, tad programma šajā lietā ir kārtībā.
#include <iostream>
#include <fstream>
#include "lvfriendly.h"
using namespace std;

int main() {
    int ok;
    do {
        fstream fin;
        string rin; // failu lasīsim pa rindiņai
        int reizes = 0; //veiksim nepieļaujamo gadījumu uzskaiti

        fin.open("piemers.txt", ios::in);
        if (!fin){cout << "Nav faila"<< endl; return 13;} // pārbaudīsim vai fails ir nolasīts
        getline(fin, rin);
        while(fin) {
            for(int i=0;i<rin.size();i++) {
                if (rin[i] == '(' && rin[i+3] == ')' && rin[i+1] == '(' && rin[i+2] == ')') {
                    i += 3;
                }
                if (rin[i] == ')' && rin[i+1] == '(')
                {
                    //cout << rin[i] << rin[i+1] << endl;
                    reizes++;
                }
                if (rin[i] == '(' && rin[i+1] == ')' && rin[i+2] == ')')
                {
                    //cout << rin[i] << rin[i+1] << rin[i+2] << endl;
                    i += 2;
                    reizes++;
                }
                if (rin[i] == '(' && rin[i+1] == '(' && rin[i+2] == ')')
                {
                    //cout << rin[i] << rin[i+1] << rin[i+2] << endl;
                    i += 2;
                    reizes++;
                }
            }
            getline(fin,rin); //nolasam nākamo rindiņu
        };
        fin.close();

        if (reizes > 0) {
            cout << "Nepareizi!" << endl;
        } else {
            cout << "Pareizi!" << endl;
        }

    cout << "Vai turpināt (1) vai beigt (0)?" << endl;
    cin >> ok;
    } while (ok == 1);
    return 0;
}

/************************* TESTA PLĀNS
    Ievads      | Programmas vçlamâ reakcija         | Rezultâts C++

    )(              "Nepareizi!"                            "Nepareizi!"

    (()             "Nepareizi!"                            "Nepareizi!"

    ())             "Nepareizi!"                            "Nepareizi!"

    ()              "Pareizi!"                              "Pareizi!"

    (())            "Pareizi!"                              "Pareizi!"

    ()))            "Nepareizi!"                            "Nepareizi!"

    ((()            "Nepareizi!"                            "Nepareizi!"

    ((())))         "Pareizi!"                              "Pareizi!"







***************************/
