/*
Problem
Our Monk loves candy!
While taking a stroll in the park, he stumbled upon N Bags with candies. The i'th of these bags contains Ai candies.
He picks up a bag, eats all the candies in it and drops it on the ground. But as soon as he drops the bag, the number of candies in the bag increases magically! Say the bag that used to contain X candies (before eating), now contains [X/2] candies! ,where [x] is the greatest integer less than x (Greatest Integer Function).
Amazed by the magical spell, Monk can now have a lot more candies! But he has to return home in K minutes. In a single minute,Monk can consume all the candies in a single bag, regardless of the number of candies in it.
Find the maximum number of candies that Monk can consume.

Input:
First line contains an integer T. T test cases follow.
First line of each test case contains two space-separated integers N and K.
Second line of each test case contains N space-separated integers,the number of candies in the bags.

Output:
Print the answer to each test case in a new line.

Constraints:
1 ≤ T ≤ 10
1 ≤ N ≤ 105
0 ≤ K ≤ 105
0 ≤ Ai ≤ 1010
Explanation
The state of bags is:
2 1 7 4 2
Monk eats all candies from Third bag (7). The state of bags becomes:
2 1 3 4 2
Monk eats all candies from Fourth bag (4). The state of bags becomes:
2 1 3 2 2
Monk eats all candies from Third bag (3). The state of bags becomes:
2 1 1 2 2
Hence, the Monk eats 7+4+3= 14


*/

#include<bits/stdc++.h>
#include<iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
       multiset<long long > bags;
        for (int i=0;i<n;++i){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
            
        }
        long long total_candies = 0;
        for (int i=0;i<k;++i){
            auto  last_it = (--bags.end());
            long long candy_ct = *last_it;
            total_candies += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
            
        }
          }
        cout<<total_candies<<endl;
    }
