#include <iostream>
using namespace std;

void findSubstring() {
    string inputString;
    cin >> inputString;

    for (int index = 0; index < inputString.size(); index++) {
        if (inputString[index] == inputString[index + 1] && (inputString.size() - index) >= 2) {
            cout << inputString[index] << inputString[index + 1] << endl;
            return;
        } else if (inputString[index] != inputString[index + 1] &&
                   inputString[index + 1] != inputString[index + 2] &&
                   inputString[index] != inputString[index + 2] &&
                   (inputString.size() - index) >= 3) {
            cout << inputString[index] << inputString[index + 1] << inputString[index + 2] << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        findSubstring();
    }
}
