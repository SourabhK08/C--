//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void utility(int a, int d, int n)
{
    // Complete the code above
    int ans = a + (n - 1) * d;
    // Complete the code above

    // The line below prints the output. Don't change it!
    cout << ans << endl;

    /* a = first term
        d = common diff
        n => an = a + ( n - 1) * d

        Input:        AP:-  5 7 9 11 13
a = 5
d = 2
n = 5
Output:
13
Explanation:
anth = a + (n-1)d = 5 + (5-1)*2 = 5 + 8 = 13

*/
}

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, d, n;
        cin >> a >> d >> n;
        utility(a, d, n);
    }
}
// } Driver Code Ends