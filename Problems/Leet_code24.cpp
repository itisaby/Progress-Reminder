#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector <int> v;
        for(int i=0; i<nums.size(); i=i+2)
        {
            int f=nums[i];
            int val=nums[i+1];
            v.insert(v.end(),f,val);
        }
        return v;
    }
};