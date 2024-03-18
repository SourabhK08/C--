//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>

// } Driver Code Ends
// User function Template for C

// Find Factorial using for loop

long long int factorial(int N)
{
    // code here
    long long int fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    }
    return fact;
}

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N;
        scanf("%d", &N);
        printf("%lld\n", factorial(N));
    }
    return 0;
}
// } Driver Code Ends