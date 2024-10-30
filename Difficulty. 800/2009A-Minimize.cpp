// https://codeforces.com/contest/2009/problem/A

// take a loop, iterate from a till b
// see if (i-a)+(b-i) < min_val (initially taken as INT_MAX)
// min_val will update everytime
// cout

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, min_val = INT_MAX;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            int temp = (i - a) + (b - i);
            if (temp < min_val)
            {
                min_val = temp;
            }
        }
        cout << min_val << endl;
    }
    return 0;
}