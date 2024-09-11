// https://codeforces.com/contest/208/problem/A

// its simple, if you find WUB, append space to a new string
// else append the characters of the string given

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' && s.length() == 0)
        {
            i += 2;
        }
        else if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            s1 += ' ';
            i += 2;
        }
        else
        {
            s1 += s[i];
        }
    }
    cout << s1 << endl;
    return 0;
}
