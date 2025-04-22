#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// intro sort is mixture odf 3 algo 
// 1. quick sort
// 2. heap sort
// 3. insertion sort
// n(log(n)) -> worst case

int main(){
    // sort with arrays
    /*int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/

    // sort with vector

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

