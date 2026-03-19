#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // 1. Upper Part
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Middle spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << "  "; // Double space to match "* "
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 2. Lower Part (Exactly inverted)
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Middle spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
