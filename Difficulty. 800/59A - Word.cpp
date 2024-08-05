// https://codeforces.com/contest/59/problem/A

// see the count of capital letters
// if it's greater than half the length of string, convert all letters to capital ones
// else convert all letters to small letters

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }
    if (count > (s.size() / 2))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}
