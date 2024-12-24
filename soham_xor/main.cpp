#include <iostream>
#include <vector>
#include <set>

using namespace std;

long long countSuitableNumbers(long long x, long long m) {
    long long count = 0;

    // Generate all divisors of x
    vector<long long> divisors;
    for (long long d = 1; d * d <= x; ++d) {
        if (x % d == 0) {
            divisors.push_back(d); // Add divisor
            if (d != x / d) {
                divisors.push_back(x / d); // Add the pair divisor
            }
        }
    }

    // Check all values of y based on divisors
    for (long long z : divisors) {
        long long y1 = x ^ z; // y1 = x ⊕ z
        if (y1 > 0 && y1 <= m && y1 != x) {
            count++;
        }
    }

    return count;
}

int main() {
    long long t;
    cin >> t;

    vector<long long> results;
    while (t--) {
        long long x, m;
        cin >> x >> m;

        long long result = countSuitableNumbers(x, m);
        results.push_back(result);
    }

    for (long long result : results) {
        cout << result << endl;
    }

    return 0;
}
