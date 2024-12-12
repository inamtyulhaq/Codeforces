// https://codeforces.com/problemset/problem/236/A

// take the string in a set
// cout according to the size of set,
// because set only stores unique characters

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> ss(s.begin(), s.end());
    if (ss.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}