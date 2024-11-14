// https://codeforces.com/contest/2036/problem/A

// take in the array
// check if the difference between the elements is 5 or 7
// if not print NO
// else print YES

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool isPerfect = true;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i] - arr[i - 1]) != 7 &&
                abs(arr[i] - arr[i - 1]) != 5)
            {
                cout << "NO\n";
                isPerfect = false;
                break;
            }
        }
        if (isPerfect)
        {
            cout << "YES\n";
        }
    }
    return 0;
}