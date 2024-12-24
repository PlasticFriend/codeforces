#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        ll total_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }

        sort(a.begin(), a.end());

        ll count = 0;
        for (int i = 0; i < n; ++i) {
            ll lower_bound_value = x + a[i] - total_sum;
            ll upper_bound_value = y + a[i] - total_sum;

            // Use lower_bound and upper_bound with the correct arguments
            auto left = lower_bound(a.begin() + i + 1, a.end(), lower_bound_value);
            auto right = upper_bound(a.begin() + i + 1, a.end(), upper_bound_value);

            count += distance(left, right);
        }

        cout << count << endl;
    }

    return 0;
}
