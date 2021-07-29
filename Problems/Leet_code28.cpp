#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int m = mat.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    sum+=mat[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if ((i + j) == (m - 1)){
                    sum+=mat[i][j];                    
                }
            }
        }
        if(m%2==1){
            sum-=mat[(m-1)/2][(m-1)/2];
        }
        return sum;
    }
};