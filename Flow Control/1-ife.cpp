//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void utility(int number)
{
    // Write the if, else if, else statements below
    if (number > 100)
    {
        cout << "Big" << endl;
    }
    else if (number < 10)
    {
        cout << "Small" << endl;
    }
    else
    {
        cout << "Number" << endl;
    }

    // if number is greater than 100: Print "Big" (without quotes)
    // else if number is smaller than 10: Print "Small" (without quotes)
    // else: Print "Number" (without quotes)

    // Write the if, else if, else statements above
}

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;
        utility(number);
    }
}
// } Driver Code Ends