// https://codeforces.com/contest/2009/problem/B

// firstly, take in rows of beatmap in a 2D array
// now, i took this approach that simple iterate backwards from end
// if you find any '#', just cout the column number
// do cout j+1, keeping in mind, array's indexing starts from 0

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char **arr;
        arr = new char *[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new char[4];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 3; j >= 0; j--)
            {
                if (arr[i][j] == '#')
                {
                    cout << j + 1 << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}