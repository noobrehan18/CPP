#include <iostream>
using namespace std;

int main() {
    int startF, endF, step;
    cin >> startF >> endF >> step;

    while (startF <= endF) {
        int celsius = (5 * (startF - 32)) / 9; // Integer division for truncation
        cout << startF << "\t" << celsius << endl;
        startF += step;
    }

    return 0;
}
