#include<bits/stdc++.h>
#include<iostream>
#include <set>
using namespace std;

void print(multiset <string> &s){
    for (string value : s) {
        cout << value  << endl;
    }
    // for (auto it = s.begin(); it != s.end(); ++it) {
    //     cout << *it << endl;
    // }
}
int main(){
    multiset <string> s;
    s.insert("abc");    // O(log n)
    s.insert("def");
    s.insert("ghi");
   
    auto it = s.find("abc");   // O(log n)
    if (it != s.end())   {

        cout << (*it) << endl;
    }
     
    print(s);

}