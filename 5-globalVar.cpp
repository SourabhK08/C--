//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int g = 10;
// decalre global variable g below

/**
 * int getter(){
     return g;
 }
 *
 * void setter(int x){
     g = x;
 }
 *

*/

//{ Driver Code Starts.

// global variable accessed from
// within a function
int getter()
{
    return g;
}

void setter(int x)
{
    g = x;
}

// main function
int main()
{
    setter(g);
    cout << getter() << endl;

    return 0;
}

// } Driver Code Ends