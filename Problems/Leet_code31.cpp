#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int count=0;
        for( int i=0; i<n; i++){

            int l=0,h=m-1;
            int flag=-1;
             while( l<=h ){

                int mid=l+(h-l)/2;

                if( grid[i][mid] < 0 ){

                    flag=mid;
                    h=mid-1;
             }
                else{
                    l=mid+1;
              }
            }
           if(flag!=-1){
               count+=m-flag;
            }
        }
        return count;
        
    }
};