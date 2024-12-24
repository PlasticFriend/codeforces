#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// Function to find the number of happy days
int countHappyDays(int n, vector<int>& pieces) {
    vector<int> layer_pieces;
    int total_pieces = 1;
    int current_layer = 1;
    int pieces_in_current_layer = 8;

    // Calculate the required pieces for each layer
    while (total_pieces <= 10000) { // A very high limit to cover all cases
        layer_pieces.push_back(total_pieces);
        total_pieces += pieces_in_current_layer;
        current_layer++;
        pieces_in_current_layer = 8 * (current_layer - 1);
    }

    int current_total = 0;
    int happy_days = 0;

    for (int day = 0; day < n; day++) {
        current_total += pieces[day];
        if (find(layer_pieces.begin(), layer_pieces.end(), current_total) != layer_pieces.end()) {
            happy_days++;
        }
    }

    return happy_days;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> pieces(n);
        for (int i = 0; i < n; i++) {
            cin >> pieces[i];
        }
        cout << countHappyDays(n, pieces) << endl;
    }
    return 0;
}
