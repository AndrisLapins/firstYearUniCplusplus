/*************************
Autors: Andris Lapins
Izveidots: 02/04/2019
*********************/
#include<iostream>
#include<fstream>
#include<list>
#include<map>
#include<ctype.h>
using namespace std;

int main() {
    int flag = 0;
    ifstream fin;
    fin.open("paldies.in");
    list<string> a;
    list<string> b;
    list<string> c;
    list<string> d;
    list<string> e;
    list<string> f;
    list<string> g;
    list<string> h;
    list<string> i;
    list<string> j;
    list<string> k;
    list<string> l;
    list<string> m;
    list<string> n;
    list<string> o;
    list<string> p;
    list<string> q;
    list<string> r;
    list<string> s;
    list<string> t;
    list<string> u;
    list<string> v;
    list<string> w;
    list<string> x;
    list<string> y;
    list<string> z;
    string word;
    while (fin >> word) {
        if(word[0] == 'a' || word[0] == 'A' || word[0] == 'â' || word[0] == 'Â') {
            a.push_back(word);
            flag = 1;
        }
        if(word[0] == 'b' || word[0] == 'B') {
            b.push_back(word);
            flag = 1;
        }
        if(word[0] == 'c' || word[0] == 'C' || word[0] == 'c' || word[0] == 'È') {
            c.push_back(word);
           flag = 1;
        }
        if(word[0] == 'd' || word[0] == 'D') {
            d.push_back(word);
            flag = 1;
        }
        if(word[0] == 'e' || word[0] == 'E' || word[0] == 'ç' || word[0] == 'Ç') {
            e.push_back(word);
            flag = 1;
        }
        if(word[0] == 'f' || word[0] == 'F') {
            f.push_back(word);
            flag = 1;
        }
        if(word[0] == 'g' || word[0] == 'G' || word[0] == 'ì' || word[0] == 'Ì') {
            g.push_back(word);
            flag = 1;
        }
        if(word[0] == 'h' || word[0] == 'H') {
            h.push_back(word);
            flag = 1;
        }
        if(word[0] == 'i' || word[0] == 'I' || word[0] == 'î' || word[0] == 'Î') {
            i.push_back(word);
            flag = 1;
        }
        if(word[0] == 'j' || word[0] == 'J') {
            j.push_back(word);
            flag = 1;
        }
        if(word[0] == 'k' || word[0] == 'K' || word[0] == 'í' || word[0] == 'Í') {
            k.push_back(word);
            flag = 1;
        }
        if(word[0] == 'l' || word[0] == 'L' || word[0] == 'ï' || word[0] == 'Ï') {
            l.push_back(word);
            flag = 1;
        }
        if(word[0] == 'm' || word[0] == 'M') {
            m.push_back(word);
            flag = 1;
        }
        if(word[0] == 'n' || word[0] == 'N' || word[0] == 'ò' || word[0] == 'Ò') {
            n.push_back(word);
            flag = 1;
        }
        if(word[0] == 'o' || word[0] == 'O') {
            o.push_back(word);
            flag = 1;
        }
        if(word[0] == 'p' || word[0] == 'P') {
            p.push_back(word);
            flag = 1;
        }
        if(word[0] == 'q' || word[0] == 'Q') {
            q.push_back(word);
            flag = 1;
        }
        if(word[0] == 'r' || word[0] == 'R') {
            r.push_back(word);
            flag = 1;
        }
        if(word[0] == 's' || word[0] == 'S' || word[0] == 'ð' || word[0] == 'Ð') {
            s.push_back(word);
            flag = 1;
        }
        if(word[0] == 't' || word[0] == 'T') {
            t.push_back(word);
            flag = 1;
        }
        if(word[0] == 'u' || word[0] == 'U' || word[0] == 'û' || word[0] == 'Û') {
            u.push_back(word);
            flag = 1;
        }
        if(word[0] == 'v' || word[0] == 'V') {
            v.push_back(word);
            flag = 1;
        }
        if(word[0] == 'w' || word[0] == 'W') {
            w.push_back(word);
            flag = 1;
        }
        if(word[0] == 'x' || word[0] == 'X') {
            x.push_back(word);
            flag = 1;
        }
        if(word[0] == 'y' || word[0] == 'Y') {
            y.push_back(word);
            flag = 1;
        }
        if(word[0] == 'z' || word[0] == 'Z' || word[0] == 'þ' || word[0] == 'Þ') {
            z.push_back(word);
            flag = 1;
        }
    }
    fin.close();
    ofstream myfile;
    myfile.open("paldies.out");
    if (flag == 1) {
        for (list<string>::reverse_iterator it = a.rbegin(); it != a.rend(); ++it) {
        myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = b.rbegin(); it != b.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = c.rbegin(); it != c.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = d.rbegin(); it != d.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = e.rbegin(); it != e.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = f.rbegin(); it != f.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = g.rbegin(); it != g.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = h.rbegin(); it != h.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = i.rbegin(); it != i.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = j.rbegin(); it != j.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = k.rbegin(); it != k.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = l.rbegin(); it != l.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = m.rbegin(); it != m.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = n.rbegin(); it != n.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = o.rbegin(); it != o.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = p.rbegin(); it != p.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = q.rbegin(); it != q.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = r.rbegin(); it != r.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = s.rbegin(); it != s.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = t.rbegin(); it != t.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = u.rbegin(); it != u.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = w.rbegin(); it != w.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = x.rbegin(); it != x.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = y.rbegin(); it != y.rend(); ++it) {
            myfile << *it << " ";
        }
        for (list<string>::reverse_iterator it = z.rbegin(); it != z.rend(); ++it) {
            myfile << *it << " ";
        }
    } else {
        myfile << "nothing";
    }
    myfile.close();
    return 0;
}
