#include <iostream>
#include <climits>
using namespace std;

// Maximum Subarray Sum

int main()
{
    int n;
    int a[n];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = INT_MIN;
    // Brute force Approach
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)                         //Time Complexity O(n^3)    (Very poor)
            {
                sum += a[k];
            }
            maxi = max(maxi, sum);
        }
    }
    cout << maxi << endl;

    // Cumulative Sum  Array Approach
    int currsum[n+1];
    currsum[0]= 0;

    for (int i = 1; i <=n; i++){
        currsum[i] = currsum[i-1] + a[i-1];
    }

    int maxsum = INT_MIN;
    for(int i = 1; i <=n; i++){
        int sum = 0;
        for(int j =0; j<i; j++){                      // Time complexity O(n^2)        (better than before)
            sum = currsum[i] - currsum[j];
            maxsum = max(sum, maxsum);
        }
    }

    cout<<maxsum<<endl;

    // More better way in time complexity o(n)
    // Kadane's algorithm 
    int currksum =0;
    int maxksum = INT_MIN;
    for(int i=0;i< n; i++){
        currksum+=a[i];
        if(currksum<0){                //This is much better approach     KADANE's ALGORITHM
            currksum=0;
        }
        maxksum = max(maxksum, currksum);

    }
    cout<<maxksum<< endl;


    return 0;
}