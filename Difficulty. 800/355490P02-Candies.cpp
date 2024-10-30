// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02

// take in values + the indexes of whom to take sum
// take sum and cout

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, c1, c2;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> c1 >> c2;
    for (int i = c1; i <= c2; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}