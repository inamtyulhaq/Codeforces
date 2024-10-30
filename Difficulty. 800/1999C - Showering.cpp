// https://codeforces.com/contest/1999/problem/C

// take in all values
// take in all intervals in an array of size n*2
// we need to find interval of at least size s
// subtract 0 from array index 0
// subtract last array's index from m
// subtract every odd index from even index
// keep on storing the values in a variable such that the upcoming max value
// takes place of smaller value already placed in variable
// see if the max value of the variable is at least equal to s
// output YES or NO accordingly

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m, minutes = 0;
        cin >> n >> s >> m;
        int arr[n * 2];
        for (int i = 0; i < n * 2; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n * 2; i++)
        {
            int temp = 0;
            if (i == 0)
            {
                temp = arr[i] - 0;
            }
            else if (i == ((n * 2) - 1))
            {
                temp = m - arr[((n * 2) - 1)];
            }
            else if (i % 2 == 0)
            {
                temp = arr[i] - arr[i - 1];
            }
            if (temp > minutes)
            {
                minutes = temp;
            }
        }
        if (minutes >= s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
