#include <iostream>
using namespace std;

int fibonacci(int n) {
    if(n == 1 || n == 2)
        return 1;
    int a = 1, b = 1, c;
    for(int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
