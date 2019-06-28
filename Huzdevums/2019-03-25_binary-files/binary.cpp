#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main() {
    ofstream f("number.bin",ios::binary);
    int i=20;
    f.write((char*)&i,4);
    char c='X';
    f.write(&c,1);
    char s[10]="Hello";
    f.write(s,strlen(s));
    string t=", World!";
    f.write(t.c_str(),t.length());
    string u=s+t;
    f.write(u.c_str(),u.length());
    f.close();
}
