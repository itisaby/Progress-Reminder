#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
         int count = 0, i;
     for(int i = 1; i < nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                count += nums[i-1] - nums[i] + 1;
                nums[i] = nums[i-1] + 1;
            }
        }
    return count;
  }
};