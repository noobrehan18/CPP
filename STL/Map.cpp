#include<bits/stdc++.h>
#include<iostream>
#include <map> 
using namespace std;

void print (map<int, string> &m){
    cout  << m.size() << endl;
    for (auto & pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
    map<int, string> m;
    m[1] = "abc";  //0(log(n))
    m[2] = "def"; 
    m[3] = "ghi";
    // m.insert({4, "jkl"}); 
    auto it =m.find(3); 
    if (it !=m.end())   // O(log(n))
        m.erase(it); 
        
    m.clear();// O(log(n))



    // if (it== m.end()){
    //     cout << "not value " << endl;
    // }else{
    //     cout << "found value " << (*it).first << " " << (*it).second << endl;
    // }
    // print(m);

    print(m);






    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); ++it) {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // @@@ shorter way to write iterators

    // for (auto & pr : m) {
    //     cout << pr.first << " " << pr.second << endl;
    // }
    
}