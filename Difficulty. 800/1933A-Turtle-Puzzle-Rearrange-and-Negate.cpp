// https://codeforces.com/contest/1933/problem/A

// take an array
// sort the array
// add the absolute value of each element of the array
// print the sum of the absolute values of the array

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i]);
        }
        cout << sum << endl;
    }
    return 0;
}