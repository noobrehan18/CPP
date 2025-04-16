#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int space = 1; space <= N - i; ++space) {
            cout << " ";
        }
        for (int num = 1; num <= i; ++num) {
            cout << num;
        }
        cout << endl;
    }

    return 0;
}
