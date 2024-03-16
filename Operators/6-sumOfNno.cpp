//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

int nSum(int n)
{
    int ans = 0;

    // Write your code here to calculate and return sum of n number.
    ans = (n * (n + 1)) / 2; // sn = n*(n+1)/2

    return ans;

    // N = 10
    // 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55.
}

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = nSum(n);
        cout << ans << endl;
    }
}
// } Driver Code Ends