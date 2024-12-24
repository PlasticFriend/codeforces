#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n;cin >> m;cin >> k;

        string s;
        cin >> s;

        int weak_count = 0, operations = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                weak_count++;
                if (weak_count == m) {
                    operations++;
                    weak_count = 0;
                    i =i+ k - 1;
                }
            } else {
                weak_count = 0;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
