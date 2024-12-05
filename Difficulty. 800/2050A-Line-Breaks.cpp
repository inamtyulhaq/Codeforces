// https://codeforces.com/contest/2050/problem/A

// taken in all the strings
// check if the sum of the length of the strings is less than or equal to m
// if yes then increment the count
// else break the loop
// print the count

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, temp = 0, count = 0;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            temp += s[i].size();
            if (temp <= m)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}