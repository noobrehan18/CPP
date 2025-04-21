#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printVec(vector<int> &v) {
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> v;  // Vector of vectors

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;

        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);  // Add elements to temp
        }

        v.push_back(temp);  // Add temp to main vector

    }

    for (int i = 0; i < v.size(); ++i) {
        printVec(v[i]);
    }

    cout << "Element at v[0][1]: " << v[0][1] << endl;

}
