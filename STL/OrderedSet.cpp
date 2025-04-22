#include<bits/stdc++.h>
#include<iostream>
#include <set>
using namespace std;

void print(set <string> &s){
    for (string value : s) {
        cout << value  << endl;
    }
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << endl;
    }
}

int main(){
    set <string> s;
    s.insert("abc");    //   log(n)
    s.insert("def");
    s.insert("ghi");
   
    auto it = s.find("abc");   // log(n)
    if (it != s.end())   {

        cout << (*it) << endl;
    }
     
    
    // print(s);


}