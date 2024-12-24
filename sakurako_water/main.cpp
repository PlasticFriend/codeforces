#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;
        int matr[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matr[i][j];
            }
        }

        for (int j = 0; j < n; j++) {
            int col = j;
            int row = 0;
            vector<int> diag;

            while (row < n && col < n) {
                diag.push_back(matr[row][col]);
                row++;
                col++;
            }

            int mini = *min_element(diag.begin(), diag.end());
            if (mini < 0) {
                res += mini;
            }
        }

        for (int i = 1; i < n; i++) {
            int row = i;
            int col = 0;
            vector<int> diag;

            while (row < n && col < n) {
                diag.push_back(matr[row][col]);
                row++;
                col++;
            }

            int mini = *min_element(diag.begin(), diag.end());
            if (mini < 0) {
                res += mini;
            }
        }

        cout << abs(res) << endl;
    }
    return 0;
}
