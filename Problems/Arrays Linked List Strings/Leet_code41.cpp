#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int h = arr.size()-1;
        while(l<h){
            int m = l + (h-l)/2;
            if(arr[m]<arr[m+1]){
                l = m+1;
            }
            else{
                h = m;
            }
        }
        return l;
    }
};