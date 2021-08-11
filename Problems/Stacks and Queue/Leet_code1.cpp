#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char>st;
        for (int i=0;s[i]!='\0';i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else if((s[i]==')'||s[i]=='}'||s[i]==']') and st.empty()){
                return false;
            }
            else if(s[i]==')' and !st.empty()){
                if(st.top()!='(')return false;
                st.pop();
            }
            else if(s[i]=='}' and !st.empty()){
                if(st.top()!='{')return false;
                st.pop();
            }
            else if(s[i]==']' and !st.empty()){
                if(st.top()!='[')return false;
                st.pop();
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};