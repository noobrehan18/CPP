#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int i=1;
    while (i<=n){
        int sp=1;
        while(sp<=n-i){
            cout << " ";
            sp++;
        }
        int str=1;
        while(str<=i){
            cout << "*";
            str++;
        }
        cout << endl;
        i++;
    }
   
}

