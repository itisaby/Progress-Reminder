#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        int half = n/2;
        vector<int> ans;
        while(half){
            ans.push_back(half);
            ans.push_back(-half);
            half--;
        }
        if(n%2){
            ans.push_back(0);
        }
        return ans;
    }
};