#include <iostream>
using namespace std;

int fact(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans=ans*i;
        i++;
    }
    return ans;
}

int main() {
    int n, r;
    cin >> n >> r;
    
    int output= fact(5);
    cout<<output<<endl;
  
}
