// https://codeforces.com/contest/431/problem/A

// simply iterate through the string length
// and correspondingly add a1,a2,a3,a4 to calories variable
// upon finding '1', '2', '3', '4' in the string

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, a4, calories = 0;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            calories += a1;
        }
        else if (s[i] == '2')
        {
            calories += a2;
        }
        else if (s[i] == '3')
        {
            calories += a3;
        }
        else if (s[i] == '4')
        {
            calories += a4;
        }
    }
    cout << calories << endl;
    return 0;
}
