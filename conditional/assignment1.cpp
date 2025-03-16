#include<bits/stdc++.h>

using namespace std;

int main(){
    int basic;
    char grade;
    cout << "Enter basic salary && grade: " ;
    cin >> basic >> grade;

    float hra= 0.2*basic;
    float da= 0.5*basic;
    float pf= 0.11*basic;

    int allow;

    if (grade == 'A'){
        allow=1700;
    }
    else if (grade == 'B'){
        allow=1500;
    }
    else{
        allow=1300;
    }

    float ts= basic + hra + da + allow - pf;
    cout << ts << endl;
    return 0;

}