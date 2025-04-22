/*
Given N string , & Q queries, in  each query  you re given A string 
print YES if  the string if it is present in the set otherwise print "NO".

N <=10^6
 |s| <= 100
 Q <= 10^6

*/

#include<bits/stdc++.h>
#include<iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
}
