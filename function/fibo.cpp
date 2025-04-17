#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return s * s == x;
}

bool isFibonacci(int n) {
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int n;
    cin >> n;
    if (isFibonacci(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
