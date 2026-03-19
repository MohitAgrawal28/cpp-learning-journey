#include <iostream>
using namespace std;

// Improved function logic to check for prime numbers
void checkPrime(int n) {
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return;
    }

    bool isPrime = true;
    // Iterate from 2 to n/2 to look for factors
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break; // Stop once a factor is found
        }
    }

    if (isPrime)
        cout << n << " is a Prime number." << endl;
    else
        cout << n << " is not a Prime number." << endl;
}

int main() {
    int userInput;

    // 1. Prompt the user
    cout << "Enter a positive integer: ";

    // 2. Accept user input using cin
    cin >> userInput;

    // 3. Call the function with the input
    checkPrime(userInput);

    return 0;
}
