// https://codeforces.com/problemset/problem/58/A

// iterate through the string
// use another string "hello"
// if elements of given string match the a char of hello string
// increment the index
// if index == 5 at the end, return YES
// else return NO

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string check = "hello";
    int index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == check[index])
        {
            index++;
        }
    }
    if (index == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}