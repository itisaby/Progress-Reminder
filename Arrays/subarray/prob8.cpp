#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Need a better algorithm 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(count(nums.begin(),nums.end(),nums[i])!=2){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};