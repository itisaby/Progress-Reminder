#include<iostream>
using namespace std;

//Pair Sum Problem 
        // Check if there exists two elements in an array such that their sum is equal to given k.


// Brute force approach
bool pairsum(int a[], int n, int k){
    for(int i = 0; i <n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i]+a[j]==k){                                       // Time Complexity o(n^2)
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

// Better approach 
bool PairsumModified(int a[], int n, int k){
    int low = 0;
    int high = n-1; 

    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<< endl;
            return true;                                          // Time Complexity O(n)
        }
        else if(a[low]+a[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}


int main() {
    int n;
    int a[n];

    cin>>n;
    // cout<<"Enter sorted array"<<endl;
    for(int i=0; i < n; i++){
        cin>>a[i];
    }
    int k = 32;
    // cout<<pairsum(a, n, k)<<endl;
    cout<<PairsumModified(a, n, k)<<endl;

    return 0;
}