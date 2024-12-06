// https://codeforces.com/problemset/problem/133/A

// iterate through the string and check if it contains any of the characters H, Q, 9
// if it does, print YES and return
// if it doesn't, print NO and return

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0;
    string p;
    getline(cin, p);
    while (i != p.size())
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            cout << "YES\n";
            return 0;
        }
        i++;
    }
    cout << "NO\n";
    return 0;
}