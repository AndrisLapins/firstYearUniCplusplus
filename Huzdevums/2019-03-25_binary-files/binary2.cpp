#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main() {
    ofstream f("number2.bin",ios::binary);
    int a[4]={55,66,77,88};
    for(int i=0;i<4;i++)
        f.write((char*)&a[i],4);
    f.write((char*)a,16);
    f.close();
}
