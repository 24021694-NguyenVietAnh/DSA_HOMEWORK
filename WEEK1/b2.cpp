#include <iostream>
using namespace std;

void sortArray(int a[], int n) {

    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;  
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (!swapped)
            break;
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
}

int main() {
    int n; 
    cout << "Enter the desired size = ";
    cin >> n;
    int a[n];
    cout << "Enter the array's elements = ";
    for (int i = 0; i < n; i++) {
       cin >> a[i];  
    }
    sortArray(a, n);
    cout << "Sorted array: " << endl;
    printArray(a, n);
    return 0;
}