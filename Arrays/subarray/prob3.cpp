#include <iostream>
#include <climits>
using namespace std;
// Maximum Circular Subarray Sum

int kadane(int a[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    // cout<<"function called"<<endl;
    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}
int main()
{
    int n;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int wsum=0;
    int nsum;
    
    nsum = kadane(a, n);
  
    int tsum = 0;
    for (int i = 0; i < n; i++)
    {
        tsum += a[i];
        a[i] = -a[i];
    }
    
    int newsum = kadane(a, n);
  
    wsum = tsum + newsum;
  
    wsum = max(wsum, nsum);
    
    cout << wsum << endl;

    return 0;
}