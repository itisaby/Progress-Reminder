#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int min_diff = abs(arr[1]-arr[0]);
        
        for(int i=0;i<arr.size()-1;i++)
        {
            int diff=0;
            diff=abs(arr[i+1]-arr[i]);
            min_diff=min(min_diff,diff);
        }
        
        for(int i=0;i<arr.size()-1;i++)
        {
            int diff=abs(arr[i+1]-arr[i]);
            if(diff==min_diff)
            {
                vector<int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                ans.push_back(temp);
            }
            
        }
        return ans;
        
    }
};