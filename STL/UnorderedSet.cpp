#include<bits/stdc++.h>
#include<iostream>
#include <set>
using namespace std;

void print(unordered_set <string> &s){
    for (string value : s) {
        cout << value  << endl;
    }
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << endl;
    }
}
// unordered_set is USE IN PRESENCE OF VaLUE IN a SET (ORDERINF IS NOT MaTTER)
int main(){
    unordered_set <string> s;
    s.insert("abc");    //   O(1)
    s.insert("def");
    s.insert("ghi");
   
    auto it = s.find("abc");   // O(1)
    if (it != s.end())   {

        cout << (*it) << endl;
    }
     
    
    // print(s);


}