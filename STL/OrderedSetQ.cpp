/*
Given N string , print unquie strings
in lexiographical  order 

N <=10^5
 |s| <= 1000000

*/

#include<bits/stdc++.h>
#include<iostream>
#include <set> 
using namespace std;

int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    for (auto value : s) {
        cout << value << endl;
    }

}
