#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream f("number2.bin",ios::binary);
    int n=0;
    f.read((char*)&n,4);
    while(!f.eof()) {
        cout<<n<<endl;
        f.read((char*)&n,4);
    }
    f.close();
}
