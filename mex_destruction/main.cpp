#include <iostream>
#include <vector>
using namespace std;

bool allElementsAreZero(const vector<int>& vec) {
    for (int num : vec) {
        if (num != 0) {
            return false;
        }
    }
    return true;
}

bool checkZeroConditions(const vector<int>& vec) {
    int n = vec.size();
    int zeroCount = 0;

    // Count the total number of zeros
    for (int num : vec) {
        if (num == 0) {
            zeroCount++;
        }
    }

    // Condition 1: Zero count is 1 and it is at the start or end
    if (zeroCount == 1) {
        if (vec[0] == 0 || vec[n - 1] == 0) {
            return true;
        }
        return false; // A single zero in the middle doesn't satisfy the condition
    }

    // Condition 2: Zero count is even and equal pairs of zeros are at the start and end
    if (zeroCount % 2 == 0) {
        int startZeros = 0, endZeros = 0;

        // Count consecutive zeros from the start
        for (int i = 0; i < n; i++) {
            if (vec[i] == 0) {
                startZeros++;
            } else {
                break;
            }
        }

        // Count consecutive zeros from the end
        for (int i = n - 1; i >= 0; i--) {
            if (vec[i] == 0) {
                endZeros++;
            } else {
                break;
            }
        }

        // Check if the number of zeros at the start and end are equal
        if (startZeros == endZeros && startZeros + endZeros == zeroCount) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n); // Fix: Initialize the vector with size `n`
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        if (allElementsAreZero(vec)) {
            cout << 0 << endl;
        } else if (checkZeroConditions(vec)) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}
