// https://codeforces.com/problemset/problem/200/B 

// take on sum of all the percentages
// divide it by total drinks * 100
// x 100 and return

#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n, p, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sum += p;
    }
    n *= 100;
    float result = (sum / n) * 100;
    cout << result << endl;
    return 0;
}
