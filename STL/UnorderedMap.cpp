#include<bits/stdc++.h>
#include<iostream>
#include <map> 
using namespace std;

void print (unordered_map<int, string> &m){
    cout  << m.size() << endl;
    for (auto & pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }
}

      /*
      1. Inbilt implementation 
      2. time complexity 
      3. valid key datatype 
      */

int main(){
    unordered_map<int, string> m;
    m[1] = "abc";  //    0(1)
    m[2] = "def"; 
    m[3] = "ghi";
    // m.insert({4, "jkl"}); 



    print(m);
}
