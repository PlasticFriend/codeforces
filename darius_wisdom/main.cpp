#include <iostream>
#include <vector>

using namespace std;

void moveInscription(vector<int>& columns, int from, int to) {
    columns[from]--;
    columns[to]++;
    cout << from << " " << to << endl;
}

void sortColumns(vector<int>& columns) {
    int n = columns.size();
    int targetIndex = 0;

    for (int i = 0; i < n; ++i) {
        while (columns[i] > columns[targetIndex]) {
            moveInscription(columns, i, targetIndex);
            targetIndex++;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> columns(n);
        for (int i = 0; i < n; ++i) {
            cin >> columns[i];
        }

        sortColumns(columns);
    }

    return 0;
}
