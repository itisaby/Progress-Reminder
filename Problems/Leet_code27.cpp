#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int comp(int a,int b){
        if(a>b)
        {
            return b;
        }
        return a;
    }
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> vec1;
        for(int i=0;i<rectangles.size();i++){
            int p = comp(rectangles[i][0], rectangles[i][1]);
            vec1.push_back(p);
        }
        int ct = 0;
        int maxe = *max_element(vec1.begin(), vec1.end());
        for(int i=0;i<vec1.size();i++){
            if(vec1[i]==maxe){
                ct++;
            }
        }
        return ct;
    }
};