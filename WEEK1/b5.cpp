#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number of elements must be greater than 0";
        return 0;
    }

else {
    int a[n]; 
    double sum = 0.0;

    cout << "Enter N elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i]; 
}
    double avg = sum / n;
    cout << "The average of the array: ";
    cout << avg << endl;
    cout << "The elements equal to the average: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= avg) {
            cout << a[i] << " ";
        }
    }
}
    return 0;
}