#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; ++i) {
            cin >> words[i];
        }

        int low = 0, high = n - 1, mid, ans;
        ans = 0;
        while (low <= high) {
            //cout<<"hello"<<endl;
            mid = low + (high - low) / 2;
            int current_length = 0;
            for (int i = 0; i <= mid; i++) {
                current_length += words[i].size();
            }
            if (current_length <= m) {
                //cout<<"fuck"<<endl;
                ans = mid + 1;
                low = mid + 1;
            }
            else {
                //cout<<"fuck2"<<endl;
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
