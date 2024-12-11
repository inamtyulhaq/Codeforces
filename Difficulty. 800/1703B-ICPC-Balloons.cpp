// https://codeforces.com/problemset/problem/492/A

// use a set
// iterate through the string
// if you find a character for the first time, count += 2
// and add it to set
// and now next time if you find it in set, count += 1
// return the count

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.find(s[i]) == st.end())
            {
                count += 2;
                st.insert(s[i]);
            }
            else
            {
                count += 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}