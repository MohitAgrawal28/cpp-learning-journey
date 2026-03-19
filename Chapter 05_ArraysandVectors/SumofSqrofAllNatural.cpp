#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    // Allocate memory for the array at runtime
    // Using long long to prevent overflow for large squares
    long long* arr = new long long[n];

    // 1. Store the squares in the array
    for (int i = 0; i < n; i++) {
        long long naturalNumber = i + 1;
        arr[i] = naturalNumber * naturalNumber;
    }

    // 2. Print the stored squares
    cout << "Squares of natural numbers till " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    // 3. Free the allocated memory (Good practice)
    delete[] arr;

    return 0;
}
