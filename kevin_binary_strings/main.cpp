#include <iostream>
#include <vector>
using namespace std;

// Function to construct the permutation
void constructPermutation(int n, int k) {
    vector<int> permutation;

    // Place the first k elements in reverse order
    for (int i = k; i >= 1; --i) {
        permutation.push_back(i);
    }

    // Add the rest of the elements in increasing order
    for (int i = k + 1; i <= n; ++i) {
        permutation.push_back(i);
    }

    // Output the permutation
    for (int i = 0; i < n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        constructPermutation(n, k);
    }
    return 0;
}
