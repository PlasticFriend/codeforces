#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int a[m];
        int b[k];

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < k; i++) {
            cin >> b[i];
        }

        if (k == n) {
            for (int i = 0; i < m; i++) {
                cout << '1';
            }
            cout << endl;
        } else if (k == n - 1) {
            int miss = 1;
            for (int i = 0; i < k; i++) {
                if (b[i] == miss) {
                    miss++;
                } else {
                    break;
                }
            }
            if (miss > n) {
                miss = n;
            }

            string res;
            for (int i = 0; i < m; i++) {
                res += (a[i] == miss) ? '1' : '0';
            }

            cout << res << endl;
        } else {
            for (int i = 0; i < m; i++) {
                cout << '0';
            }
            cout << endl;
        }
    }
    return 0;
}
