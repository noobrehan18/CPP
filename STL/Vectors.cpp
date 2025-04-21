#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printVec(vector<string> &v){
    cout << "Size: " << v.size() << endl;
    for (int i=0; i<v.size(); i++){
        // v.size()-> o(1) {vector size dynamic size hota haiii}
        cout << v[i] << " ";
    }
    cout << endl;
}

// int main(){
    
//     vector<int> v(5,2);
//     v.push_back(7); 
//     printVec(v);
//     // delete the last element of the array
//     v.pop_back(); // o(1)

//     //o(1)
//     // int n;
//     // cin >> n;
//     // for (int i=0; i<n; i++){
//     //     int x;
//     //     cin >> x;
//     //     //push_back end ma daal jayuega 
//     //     v.push_back(x); //o(1)
//     // }

//     printVec(v);
//     vector<int> v2=v; // copy vector  -> o(n)

// }
int main(){
    // string datatype 
    vector<string> v;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string x;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);




}