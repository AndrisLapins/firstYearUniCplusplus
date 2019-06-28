// PiPLU0402.cpp
/*********************************************
 PiPLU0402. Sast�d�t C++ programmu, kas apstr�d� dotu v�rdu virkni.
 Virkne dota k� STL klases vector objekts.
Programmai j�saskaita, cik virkn� ir v�rdu ar garumu 1,
cik ir v�rdu ar garumu 2, utt..
Rezult�ts j�ieliek STL klases map objekt�.
*********************************************/
// Autors: Uldis Straujums
// Rad�ts: 15.03.2018. Modific�ts piem�rs map.cpp
// no e-kursa "Programmat�ras izstr�des pamati"

#include<iostream>
#include<map>
#include<vector>
#include "lvtocon.h" // latvie�u valodas tekstu izvadei projektos v.2.0(�riks Gopaks, 2011)
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
    map<int, int>   vg_skaits;  // (v�rda garums, skaits)
    int maksg;                  // maksim�lais v�rda garums
    int vsi;                    // v�rdu skaits ar garumu i

    // Aizpilda map konteineru s ar p�riem (v�rds, bie�ums) no vektora v
    for(int i=0;i<v.size();i++) // loop over all the source words
    {
        // if not found, then create
        if (s.find(v[i])==s.end()) s[v[i]]=0;
        // add statistics
        s[v[i]]++;
    }
    // Izdruk� v�rdu bie�umus no map konteinera s
    print_frequencies(s);

    // Atrod maksim�lo v�rda garumu maksg map konteiner� s
    maksg = 0;
    for (map<string,int>::const_iterator sit = s.begin();
             sit!=s.end(); ++sit)
        if (sit->first.length()>maksg) maksg = sit->first.length();

    cout << "Maksim�lais v�rda garums: " << maksg << endl;
    cout << endl;

    // Saskaita 1-burta v�rdus, 2-burtu v�rdus, utt., maksg-v�rdus
    // konteiner� s,
    // ieliek iek� map konteinera vg_skaits
    for (int i=1; i<=maksg;i++)
    {
     vsi = 0;
     for (map<string,int>::const_iterator sit = s.begin(); sit!=s.end(); ++sit)
         if (sit->first.length()== i) vsi += sit->second;
     vg_skaits[i] = vsi;   // Izveido p�ri (v�rda garums i, v�rdu skaits)
    }

    // Izdruk� rezult�tu no vg_skaits
    cout << "V�rda garums  \t skaits" << endl;
    print_equalsizeword_counts(vg_skaits);

}
/***************** Testu pl�ns ***********************************************
v�rdu virkne                                           paredzamais rezult�ts
"life","is","beautiful","but","life","is","life" "ir"      2 3
                                                           3 1
                                                           4 3
                                                           9 1
==============================================================================
tuk�a                                                      tuk�s
*****************************************************************************/
