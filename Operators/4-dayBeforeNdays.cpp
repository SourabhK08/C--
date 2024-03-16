#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d = 0; // current day               0 = Sunday
    int n = 9; // no of days               1 = Monday

    int x = n % 7;   // in range  0 - 6
    int ans = d - x; // sub value from d if -ve then add 7 else ans

    if (ans > 0)
    {
        /* code */
        cout << ans;
    }
    else
    {
        cout << ans + 7;
    }
    return 0;
}

// ANS : 5 -> FRIDAY
