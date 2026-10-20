#include <iostream>
#include <cmath>
using namespace std;

long long findGCD(long long x, long long y) {
    x = abs(x);
    y = abs(y);
    while (y != 0) {
        long long temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

void SimplifyFraction(long long a, long long b) {
    if (b == 0) {
        cout << "Denominator must be 0" << endl;
        return;
    }

    long long gcd = findGCD(a, b);

    a /= gcd;
    b /= gcd;

    if (b < 0) {
        a = -a;
        b = -b;
    }

    if (b == 1) {
        cout << "Fraction after simplification: " << a << endl;
    } else {
        cout << "Fraction after simplification: " << a << "/" << b << endl;
    }
}

int main() {
    long long a, b;
    cout << "Insert numerator A: ";
    cin >> a;
    cout << "Insert denominator B: ";
    cin >> b;
    SimplifyFraction(a, b);
    return 0;
}
