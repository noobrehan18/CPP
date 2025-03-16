#include <iostream>
using namespace std;

int main(){
    int i,S,E,W;
    cin >> S >> E >> W;
    for (i=S; i<=E; i+=W){
        int celsius = (int)((5.0 / 9) * (i - 32));
        cout << i << "\t" << celsius << endl;

    }
    return 0;

}