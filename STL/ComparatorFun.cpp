#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool shouldSwap(int a,int b){
    if(a> b) return true;
    return false;
      
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(shouldSwap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}