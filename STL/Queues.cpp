#include<bits/stdc++.h>
#include<iostream>


using namespace std;

int main(){
    queue<string> q;
    q.push("Hello");
    q.push("World");
    q.push("!");
    q.push("How");
    while( !q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    
}
