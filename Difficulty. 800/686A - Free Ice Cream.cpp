// https://codeforces.com/contest/686/problem/A

// use long long data type
// simply intake the character sign and the value
// add upon fiding '+'
// upon finding '-', if the difference gets less than 0, increment the dissatisfied kids count
// else simply subtract
// cout the results

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, x, y = 0, c2;
    char c1;
    cin >> n >> x;
    while (n--)
    {
        cin >> c1;
        cin >> c2;
        if (c1 == '+')
        {
            x += c2;
        }
        else if (c1 == '-')
        {
            if (x - c2 >= 0)
            {
                x -= c2;
            }
            else
            {
                y++;
            }
        }
    }
    cout << x << ' ' << y << endl;
    return 0;
}
