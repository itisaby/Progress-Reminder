#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Find duplicate numbers 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> a;
        int n = nums.size(); 
        int maxnum = INT_MIN;
        for (int i = 0; i < n; i++){
            maxnum = max(maxnum, nums[i]);
        }
        for(int i=0;i<maxnum+1;i++){                                 //Naive solution
            a.push_back(0);
        }
        int s;
        for(int i=0;i<n;i++){
            s = nums[i];
            a[s]++;
        }
        for(int i=0;i<maxnum+1;i++){
            if(a[i]>1){
                return i;
            }
        }
        return 0;
        // sort(nums.begin(), nums.end());                     //Better approach
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]){
        //         return nums[i];
        //     }
        // }
        // return -1;
    }
};