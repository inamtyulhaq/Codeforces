// https://codeforces.com/contest/2014/problem/A

// take the gold if it is greater than k, use an array/vector
// if gold is 0, then simply Robin will give 1 gold (gold--) and 
// count++, number of people he gives gold increases
// cout the count

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, gold = 0, count = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= k)
            {
                gold += arr[i];
            }
            else if (arr[i] == 0)
            {
                if (gold > 0)
                {
                    gold -= 1;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}