//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void utility(int number)
{

    // write your code here
    if (number % 2 == 0)
    {
        cout << "Friend";
    }
    else
    {
        cout << "You";
    }

    // Given a number, represents number of apples in a bag. You and your friend are playing a game. Both of you are picking one apple turn wise from the bag. It is given that first attempt is always by you. The person picking the last apple will be the winner. Find out the winner if the quantity of apples is given to you as a number.
    // If you will win: Print "You" (without quotes)
    // If your friend will win: Print "Friend" (without quotes)
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
        cout << endl;
    }
}
// } Driver Code Ends