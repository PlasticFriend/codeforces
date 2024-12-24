#include <iostream>
#include <string>
using namespace std;

bool canBeDivisibleBy9(const string& n) {
    int sum_of_squares = 0;
    for (char digit : n) {
        int d = digit - '0';
        if (d == 0 || d == 1 || d == 2 || d == 3 || d == 5) {
            sum_of_squares += d * d;
        } else {
            return false; // If the digit is 4, 6, 7, 8, or 9, squaring results in non-digit number
        }
    }
    return (sum_of_squares % 9 == 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        if (canBeDivisibleBy9(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
