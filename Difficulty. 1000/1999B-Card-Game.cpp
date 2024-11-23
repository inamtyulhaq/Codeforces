// https://codeforces.com/contest/1999/problem/B

// simulate it in mind
// either both of his turns, person A has greater number than person B
// OR ||
// in one turn, he has greater number and other turn, both their numbers are same
// return the count

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> a >> b >> c >> d;
        if (a > c && b > d || a > c && b == d || a == c && b > d)
        {
            count += 2;
        }
        if (a > d && b > c || a > d && b == c || a == d && b > c)
        {
            count += 2;
        }
        cout << count << endl;
    }
    return 0;
}