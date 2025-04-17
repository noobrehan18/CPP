#include <iostream>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    int fact_n = 1;
    int i1 = 1;
    while (i1 <= n) {
        fact_n = fact_n * i1;
        i1++;
    }

    int fact_r = 1;
    int i2 = 1;
    while (i2 <= r) {
        fact_r = fact_r * i2;
        i2++;
    }

    int fact_n_r = 1;
    int i3 = 1;
    while (i3 <= n - r) {
        fact_n_r = fact_n_r * i3;
        i3++;
    }

    cout << fact_n / (fact_r * fact_n_r) << endl;

    return 0;
}
