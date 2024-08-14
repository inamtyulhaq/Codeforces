// https://codeforces.com/problemset/problem/716/A

// take all the seconds the values were typed in an array
// now simply iterate through the array
// count++, if you find difference between any two array less than or equal to c
// if find difference greater than c, set count equal to 0
// cout the count

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    long long n, c;
    cin >> n >> c;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] <= c)
        {
            count++;
        }
        else if (arr[i + 1] - arr[i] > c)
        {
            count = 0;
        }
    }
    cout << count + 1 << endl;
    return 0;
}
