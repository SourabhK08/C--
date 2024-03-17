//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void fizzBuzz(int number)
{
    // Write your code here.
    if (number % 3 == 0 && number % 5 == 0)
    {
        cout << "FizzBuzz" << endl;
    }
    else if (number % 5 == 0)
    {
        cout << "Buzz" << endl;
    }
    else if (number % 3 == 0)
    {
        cout << "Fizz" << endl;
    }
    else
    {
        cout << number << endl;
    }

    /*If the number is divisible by 3, you print "Fizz" (without quotes)
If the number is divisible by 5, you print "Buzz" (without quotes)
If the number is divisible by both 3 and 5, you print "FizzBuzz" (without quotes)
In any other case, you print the number itself*/
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
        fizzBuzz(number);
    }
}
// } Driver Code Ends