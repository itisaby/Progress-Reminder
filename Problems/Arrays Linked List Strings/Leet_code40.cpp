#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        queue <int> q1;
        queue <int> q2;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                q1.push(nums[i]);
            }
            else{
                q2.push(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
               nums[i]=q1.front();
               q1.pop();
            }
            else if(i%2!=0){
                nums[i]=q2.front();
                q2.pop();
            }
        }
        return nums;
    }
};