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

    return 0;
}