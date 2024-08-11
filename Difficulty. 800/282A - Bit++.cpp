// https://codeforces.com/contest/282/problem/A

// use if else to do post increment or pre increment
// of the variable x

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s == "++X")
        {
            ++x;
        }
        else if (s == "X++")
        {
            x++;
        }
        else if (s == "--X")
        {
            --x;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
