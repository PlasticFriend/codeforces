#include <iostream>
#include <algorithm>
using namespace std;

void setPricesToZero(long long elearr[], long long size, long long pricearr[]) {
    for (long long i = 0; i < size; i++) {
        if (elearr[i] == 0) {
            pricearr[i] = 0;
        }
    }
}

long long moneyInKitchen(string burger, long long itemarr[], long long pricearr[]) {
    long long n = burger.size();
    long long Bcount = 0, Scount = 0, Ccount = 0;

    for (long long i = 0; i < n; i++) {
        if (burger[i] == 'B') {
            Bcount++;
        } else if (burger[i] == 'S') {
            Scount++;
        } else if (burger[i] == 'C') {
            Ccount++;
        }
    }

    long long elearr[3] = {Bcount, Scount, Ccount};
    setPricesToZero(elearr, 3, pricearr);

    return ((itemarr[0] * pricearr[0]) +
            (itemarr[1] * pricearr[1]) +
            (itemarr[2] * pricearr[2]));
}

long long unitMoney(string burger, long long pricearr[]) {
    long long n = burger.size();
    long long Bcount = 0, Scount = 0, Ccount = 0;

    for (long long i = 0; i < n; i++) {
        if (burger[i] == 'B') {
            Bcount++;
        } else if (burger[i] == 'S') {
            Scount++;
        } else if (burger[i] == 'C') {
            Ccount++;
        }
    }

    return ((Bcount * pricearr[0]) +
            (Scount * pricearr[1]) +
            (Ccount * pricearr[2]));
}

int main() {
    string burger;
    cin >> burger;

    long long itemarr[3];
    long long pricearr[3];

    for (long long i = 0; i < 3; i++) {
        cin >> itemarr[i];
    }
    for (long long i = 0; i < 3; i++) {
        cin >> pricearr[i];
    }

    long long extMoney;
    cin >> extMoney;

    long long money = extMoney + moneyInKitchen(burger, itemarr, pricearr);
    long long number = money / unitMoney(burger, pricearr);

    cout << number;
    return 0;
}
