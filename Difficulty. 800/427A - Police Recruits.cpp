// https://codeforces.com/contest/427/problem/A

// add the positive integers to a variable
// if find -1, either subtract 1 from that variable (mentioned above)
// else it os an untreated crime 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, untreatedCrimes = 0, policeOfficers = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            if (policeOfficers > 0)
            {
                policeOfficers -= 1;
            }
            else
            {
                untreatedCrimes++;
            }
        }
        if (arr[i] >= 1)
        {
            policeOfficers += arr[i];
        }
    }
    cout << untreatedCrimes << endl;
    return 0;
}
