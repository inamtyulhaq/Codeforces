// https://codeforces.com/contest/1999/problem/A

// keep on dividing the number by 10
// keep on adding the remainders until it becomes 0 (all digits covered)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;

        while (n > 0)
        {
            int temp = n % 10;
            sum += temp;
            n /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}
