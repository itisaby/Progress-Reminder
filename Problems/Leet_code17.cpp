#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int l = -1, sl = -1;
        for(int i=0;i<s.length();i++){
            if(s[i]>=48 && s[i]<=57){
                if(s[i]-48<l &&s[i]-48>sl){
                    sl = s[i] - 48;
                }
                else if(s[i]-48>l){
                    sl = l;
                    l =s[i] -48;
                }
            }
        }
        return sl;
    }
};