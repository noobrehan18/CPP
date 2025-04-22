/*
Given N string , print unquie strings
in lexiographical  order with their frequency

N <=10^6
 |s| <= 100

*/

#include<bits/stdc++.h>
#include<iostream>
#include <map> 
using namespace std;

int main(){
    map <string, int> m;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        // m[s]=m[s]+1;
        m[s]++;

    }
    for (auto & pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }

}