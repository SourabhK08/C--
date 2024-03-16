//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void utility(int a, int r, int n)
{
    // Complete the code below
    int ans = a * pow(r, n - 1);
    // Complete the code above

    // The line below prints the output. Don't change it!

    cout << ans << endl;

    /*Given three integer, a, r and n. Where a is the first term, r is the
    common ratio of a G.P and r is equal to 2.
    Calculate the nth term of GP.  The nth term is given by an = a*rn-1 where r = 2.

    Input:
a = 2
n = 10
Output:
1024
Explanation:
 an = a * rn-1 = 2 * 210-1 = 1024

    */
}

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, n;
        cin >> a >> n;
        int r = 2;
        utility(a, r, n);
    }
}
// } Driver Code Ends