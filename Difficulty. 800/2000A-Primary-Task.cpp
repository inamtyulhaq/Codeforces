// https://codeforces.com/contest/2000/problem/A

// take a simple brute force approach
// see if first two digits of the integer are 1 and 0 and
// if length is 3, third digit is at least 2
// else if length is greater than 3, then third digit is at least 1
// problem solved.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '1' && s[1] == '0' && s[2] >= '1' && s.length() > 3)
        {
            cout << "YES\n";
        }
        else if (s[0] == '1' && s[1] == '0' && s[2] >= '2' && s.length() == 3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}