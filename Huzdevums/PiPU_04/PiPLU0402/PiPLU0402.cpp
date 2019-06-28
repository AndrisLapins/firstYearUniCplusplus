// PiPLU0402.cpp
/*********************************************
 PiPLU0402. Sastâdît C++ programmu, kas apstrâdâ dotu vârdu virkni.
 Virkne dota kâ STL klases vector objekts.
Programmai jâsaskaita, cik virknç ir vârdu ar garumu 1,
cik ir vârdu ar garumu 2, utt..
Rezultâts jâieliek STL klases map objektâ.
*********************************************/
// Autors: Uldis Straujums
// Radîts: 15.03.2018. Modificçts piemçrs map.cpp
// no e-kursa "Programmatûras izstrâdes pamati"

#include<iostream>
#include<map>
#include<vector>
#include "lvtocon.h" // latvieðu valodas tekstu izvadei projektos v.2.0(Çriks Gopaks, 2011)
using namespace std;

void print_frequencies(map<string,int> &s)
{
    for (auto it=s.begin();it!=s.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}
void print_equalsizeword_counts(map<int,int> &vg_skaits)
{
    for (auto it=vg_skaits.begin();it!=vg_skaits.end();it++)
        if (it->second!=0) cout<<it->first<<"\t\t "<<it->second<<endl;
}
int main ()
{
   vector<string> v = {"life","is","beautiful","but","life","is","life", "ir"}; // source
  //vector<string> v = {}; // source
    map<string,int> s;          // map for frequency statistics
    map<int, int>   vg_skaits;  // (vârda garums, skaits)
    int maksg;                  // maksimâlais vârda garums
    int vsi;                    // vârdu skaits ar garumu i

    // Aizpilda map konteineru s ar pâriem (vârds, bieþums) no vektora v
    for(int i=0;i<v.size();i++) // loop over all the source words
    {
        // if not found, then create
        if (s.find(v[i])==s.end()) s[v[i]]=0;
        // add statistics
        s[v[i]]++;
    }
    // Izdrukâ vârdu bieþumus no map konteinera s
    print_frequencies(s);

    // Atrod maksimâlo vârda garumu maksg map konteinerâ s
    maksg = 0;
    for (map<string,int>::const_iterator sit = s.begin();
             sit!=s.end(); ++sit)
        if (sit->first.length()>maksg) maksg = sit->first.length();

    cout << "Maksimâlais vârda garums: " << maksg << endl;
    cout << endl;

    // Saskaita 1-burta vârdus, 2-burtu vârdus, utt., maksg-vârdus
    // konteinerâ s,
    // ieliek iekð map konteinera vg_skaits
    for (int i=1; i<=maksg;i++)
    {
     vsi = 0;
     for (map<string,int>::const_iterator sit = s.begin(); sit!=s.end(); ++sit)
         if (sit->first.length()== i) vsi += sit->second;
     vg_skaits[i] = vsi;   // Izveido pâri (vârda garums i, vârdu skaits)
    }

    // Izdrukâ rezultâtu no vg_skaits
    cout << "Vârda garums  \t skaits" << endl;
    print_equalsizeword_counts(vg_skaits);

}
/***************** Testu plâns ***********************************************
vârdu virkne                                           paredzamais rezultâts
"life","is","beautiful","but","life","is","life" "ir"      2 3
                                                           3 1
                                                           4 3
                                                           9 1
==============================================================================
tukða                                                      tukðs
*****************************************************************************/
