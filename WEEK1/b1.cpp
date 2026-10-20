#include <iostream>
using namespace std;

int main() {
	int n;
	int sum;
	cout << "Define n = ";
	cin >> n;
	int a[n];
	cout << "Enter n amount of numbers = ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "The array is as follows: a[n] = ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << "The sum of every element = " << sum;
}