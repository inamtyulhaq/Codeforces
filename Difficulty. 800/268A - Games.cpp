// https://codeforces.com/contest/268/problem/A

// take all the values in an array
// remember, you have to compare homeground shirts with guest shirts
// so the indexes to compare with must be carefully selected
// such that for all home shirts (i%2==0), compare them with (i%2!=0) and count++ accordingly
// and vice versa for all guest shirts comparison

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = i + 1; j < n * 2; j += 2)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
        else if (i % 2 != 0)
        {
            for (int j = i + 1; j < n * 2; j += 2)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
