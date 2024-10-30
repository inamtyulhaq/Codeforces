// https://codeforces.com/contest/75/problem/A

// take in integers, take their sum
// now convert them to strings
// remove the zeroes, (may take new string to append all characters except '0's)
// then convert them to integers
// take their sum
// see if it matches
// cout YES, NO respectively

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    c = a + b;
    string as, bs, cs;
    as = to_string(a);
    bs = to_string(b);
    cs = to_string(c);
    string as0, bs0, cs0;
    for (int i = 0; i < as.length(); i++)
    {
        if (as[i] != '0')
        {
            as0 += as[i];
        }
    }
    for (int i = 0; i < bs.length(); i++)
    {
        if (bs[i] != '0')
        {
            bs0 += bs[i];
        }
    }
    for (int i = 0; i < cs.length(); i++)
    {
        if (cs[i] != '0')
        {
            cs0 += cs[i];
        }
    }
    a = stoi(as0);
    b = stoi(bs0);
    c = stoi(cs0);
    if (c == a + b)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}