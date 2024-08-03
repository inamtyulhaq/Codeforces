// https://codeforces.com/contest/1850/problem/C

// i took an array of size 64
// inputted all the 8x8 grid
// now whenever i found some small case letter
// i now incremented my i by 7 everytime
// also imposed a restriction that if i have small case letter at an index
// and no small case letter 8 indexes later
// break

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string answer;
    cin >> t;
    while (t--)
    {
        answer = "";
        char arr[64];
        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
        }
        for (int i = 8; i < 16; i++)
        {
            cin >> arr[i];
        }
        for (int i = 16; i < 24; i++)
        {
            cin >> arr[i];
        }
        for (int i = 24; i < 32; i++)
        {
            cin >> arr[i];
        }
        for (int i = 32; i < 40; i++)
        {
            cin >> arr[i];
        }
        for (int i = 40; i < 48; i++)
        {
            cin >> arr[i];
        }
        for (int i = 48; i < 56; i++)
        {
            cin >> arr[i];
        }
        for (int i = 56; i < 64; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 64; i++)
        {
            if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                answer += arr[i];
                i += 7;
            }
            if (arr[i] >= 'a' && arr[i] <= 'z' && !(arr[i + 8] >= 'a' && arr[i + 8] <= 'z'))
            {
                break;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
