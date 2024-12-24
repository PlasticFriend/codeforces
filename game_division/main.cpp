#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> missing_questions(m);
        for (int i = 0; i < m; i++) {
            cin >> missing_questions[i];
        }

        vector<int> known_questions(k);
        for (int i = 0; i < k; i++) {
            cin >> known_questions[i];
        }

        unordered_set<int> known_questions_set(known_questions.begin(), known_questions.end());

        string result = "";
        for (int i = 0; i < m; i++) {
            if (known_questions_set.count(missing_questions[i]) == 0) {
                // If the missing question is NOT in the set of known questions, Monocarp can pass
                result += "1";
            } else {
                result += "0";
            }
        }

        cout << result << endl;
    }

    return 0;
}
