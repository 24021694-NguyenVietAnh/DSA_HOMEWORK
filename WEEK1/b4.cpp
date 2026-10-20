#include <iostream>
#include <algorithm>
using namespace std;

void SimplifyFraction(int a, int b) {
    int c;
    c = __gcd(a,b);
    a = a/c;
    b = b/c;
    cout << "a/b = " << a << "/" << b;
}

int main() {
    int a, b;
    cout << "Enter a fraction: ";
    cin >> a >> b; 
    SimplifyFraction(a,b);
    return 0;
}