#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "ENTER INT NUMBERS :";
    cin >> n;
    int evensum=0, oddsum=0;
    while (n >0){
        int digit= n%10;
        if (digit %2==0){
            evensum=evensum+ digit;
        }
        else{
            oddsum=oddsum+digit;
        }
        n=n/10;
    }
    cout << "Sum of even digits: " << evensum  << " " << "Sum of odd digits: " << oddsum << endl;

    
    return 0;
}