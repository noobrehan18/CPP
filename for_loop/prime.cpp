#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool div=false;
    for(int d=2;d<n;d++){
        if(n%d==0){
            div=true;
        }
    }
    if(div){
        cout << "NOT PRIME " << endl;
    }else {
        cout << "PRIME " << endl;
    }
 }
   