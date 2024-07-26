// https://codeforces.com/group/yg7WhsFsAp/contest/355499/problem/A

// take in the profits per day
// and keep on adding them to a separate integer variable
// whenever that variable reaches equal to or greater than 'x'
// simply output the number of days (i+1)

#include <iostream>

using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;
    int arr[n];
    int profits = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        profits += arr[i];
        if (profits >= x)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
