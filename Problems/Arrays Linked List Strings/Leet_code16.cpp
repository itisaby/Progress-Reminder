#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0;i<address.length();){
            if(address[i] == '.'){
                address.replace(i, 1, "[.]");
                i+=3;
            }
            else{
                i++;
            }
        }
        return address;
    }
};