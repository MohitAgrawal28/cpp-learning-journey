#include <iostream>

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicateCount = 0;

    // To avoid counting the same duplicate multiple times, 
    // we use a boolean array to keep track of what we've already counted.
    bool visited[100] = {false}; // Size should be at least n

    for (int i = 0; i < n; i++) {
        // If we already counted this element as a duplicate, skip it
        if (visited[i] == true) {
            continue;
        }

        bool foundDuplicate = false;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                foundDuplicate = true;
                visited[j] = true; // Mark this index so we don't count it again
            }
        }

        if (foundDuplicate) {
            duplicateCount++;
        }
    }

    std::cout << "Number of elements appearing more than once: " << duplicateCount << std::endl;

    return 0;
}
