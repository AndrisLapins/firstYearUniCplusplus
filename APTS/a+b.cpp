///Andris Lapiòð
///A + B APTS uzdevums
///01/04/2019

#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdint.h>
using namespace std;

int main() {
    unsigned long long int a, b;
    scanf("%lld %lld", &a, &b);
    //unsigned long long int c = pow(10,18) - 10000000;
    //printf("%lld\n", c);
//    while (!(a <= pow(10,18)) && !(b <= pow(10,18)) && !(a >= pow(10,18)*-1) && !(b >= pow(10,18)*-1)) {
//        //scanf("%llu %llu", &a, &b);
//        cout << "Error: ";
//        scanf("%llu %llu", &a, &b);
//    }

    printf("%lld\n", a+b);
    return 0;
}
