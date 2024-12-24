#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char a = s[0];
        char op = s[1];
        char b = s[2];

        if ((op == '<' && a < b) || (op == '>' && a > b) || (op == '=' && a == b)) {
            cout << s << endl;
        } else {
            if (a < b) {
                cout << a << "<" << b << endl;
            } else if (a > b) {
                cout << a << ">" << b << endl;
            } else {
                cout << a << "=" << b << endl;
            }
        }
    }
    return 0;
}
