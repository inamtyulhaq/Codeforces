// https://codeforces.com/contest/556/problem/A

// there is a trick to this question
// see this pattern in the given test cases
// simple count the number of ones and zeroes
// and take their difference
// remember the difference must always be positive
// so either use conditions of which integer is greater or use abs() function.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, one = 0, zero = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    cout << abs(one - zero) << endl;
    return 0;
}
