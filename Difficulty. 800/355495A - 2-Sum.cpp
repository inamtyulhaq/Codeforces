// https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/A

// iterate in a nested for loop
// take sum of all numbers with numbers at greater index than them
// cout yes if you find any and return
// else cout no at the end

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
