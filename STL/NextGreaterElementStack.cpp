/*Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.
For the input array [4, 5, 2, 25}, the next greater elements for each element are as follows.
Element --> NGE

4 --> 5
5 --> 25
2 --> 25
25 --> -1
For the input array [13, 7, 6, 12}, the next greater elements for each element are as follows.
Element --> NGE

13 --> -1
7 --> 12
6 --> 12
12 --> -1
Input Format
The first line of input contains an integer n denoting the size of the array
The next line contains n space seperated array elements in integer range
0 < n < = 65535

Output Format
Output consists of n lines
Each line should contain 2 space seperated integers
The first integer should represent the array element and second integer should represent the next greater element
Sample Input
4
4 5 2 25
Sample Output
4 5
5 25
2 25
25 -1   */

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

vector<int> NGE(vector<int> v) {
    vector<int> nge(v.size());
    stack<int> st;

    for (int i = 0; i < v.size(); ++i) {
        while (!st.empty() && v[st.top()] < v[i]) {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }

    return nge;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> ans = NGE(v);

    for (int i = 0; i < n; ++i) {
        if (ans[i] == -1)
            cout << v[i] << " -> -1" << endl;
        else
            cout << v[i] << " -> " << v[ans[i]] << endl;
    }

    return 0;
}