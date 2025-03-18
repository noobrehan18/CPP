#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int i=1;
    while (i<=n){
        int j=1;
        char startChar = 'A'+i-1;
        while(j<=i){
            
            cout << startChar;
            j++;
        }
        cout << endl;
        i++;
    }
}