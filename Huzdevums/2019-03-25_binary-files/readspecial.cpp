#include<iostream>
#include<fstream>
using namespace std;
int main() {
    fstream f("number2.bin",ios::binary|ios::in|ios::out);
    f.seekg(8);
    cout<<f.tellg()<<endl;
    int n=0;
    f.read((char*)&n,4);
    cout<<n<<endl;
    f.seekg(0,ios::end);
    cout<<f.tellg()<<endl;
    f.seekg(-12,ios::cur);
    n=999;
    f.write((char*)&n,4);
    cout<<f.tellg()<<endl;
    f.close();
}
