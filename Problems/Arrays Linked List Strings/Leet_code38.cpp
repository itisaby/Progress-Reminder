#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min; int maxprofit=0;
        min=prices[0];                                  
    for(int i=0;i<prices.size();i++) 
    {
        if(min>prices[i])                                  
            min=prices[i];                                   
       if( (prices[i]-min) > maxprofit)                          
           maxprofit=prices[i]-min;                              
    }
    return maxprofit;
    }
};