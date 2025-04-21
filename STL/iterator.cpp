#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// int main(){
//     vector<int> v={2,3,4,5,6};
//     for (int i=0; i< v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     // // declare an iterator
//     // vector<int>::iterator it=v.begin();
//     // for (it =v.begin(); it!=v.end(); it++){
//     //     cout << *it << endl;
//     // }
//     // ##### Iterators point to pairs
//     vector<pair<int, int>> v_p={{1,2}, {3,4}, {5,6}};
//     vector<pair<int, int>>::iterator it;
//     for (it =v_p.begin(); it!=v_p.end(); ++it){
//         cout << (*it).first << " " << (*it).second << endl;
//     }

//     for (it =v_p.begin(); it!=v_p.end(); ++it){
//         cout << (it ->first) << " " << (it ->second) << endl;
//     }

//     //  (*it).first <==> it->first

// }


// @@@@@ Range based Loops


// int main(){
//     vector<int> v={2,3,4,5,6};
//     for (int i=0; i< v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     vector<int>::iterator it;
//     for (it =v.begin(); it!=v.end(); ++it){
//         cout << (*it) << endl;
//     }
//     // SHORT TO  write Iterators
//     for (int val : v){
//         cout << val << " ";
//     }
//     cout << endl;


// }



// ##### Auto keyword 
int main(){
    vector<pair<int> v={{2,3},{4,5},{6,7};
    for (auto & value : v_p){
        cout << value.first << " " << value.second << endl;
    }
    auto a=1.0;
    cout << a << endl;

}