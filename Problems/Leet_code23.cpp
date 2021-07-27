#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        int count = 0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k){
                break;
            }

            s1+=s[i];
        }
        return s1;
    }
};