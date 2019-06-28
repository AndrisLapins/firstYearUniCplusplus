// Hello.cpp

#include <iostream>
#include <lvfriendly.h>

using namespace std;

int main() {

int ok;

    do
    {
        cout << "Lai izrçíinâtu binâro atlikumu, ievadi skaitli: ";
        int a;
        cin >> a;
        int ans = a % 256;
        cout << "Atlikums: " << ans << endl;
        int ans1 = a / 256;
        cout << "Veselais skaitlis no ðî dalîjuma: " << ans1 << endl;


        cout << "Turpinât (1) vai beigt (0): ";
        cin >> ok;
    } while (ok == 1);


return 0;

}
