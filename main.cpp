#include "gcd.h"
#include <iostream>

using namespace std;

int gcd (int a , int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {

    cout << "The greatest common denominator of 10 and 100 is " << gcd(10, 100) << endl;

    return 0;
}