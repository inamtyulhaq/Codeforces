// https://codeforces.com/contest/709/problem/A

// iterate through the number of oranges sizes
// if found any orange greater than b, simply throw it (increase size by 0 or do nothing)
// else keep on adding sizes (keep on squeezing), if the sum at any time gets greater than d,
// increment the count (number of times you will have to empty the waste section)
// return at the end

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b, d, squeezeCount = 0, temp = 0;
    cin >> n >> b >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b)
        {
            squeezeCount += 0;
        }
        else
        {
            temp += arr[i];
        }
        if (temp > d)
        {
            squeezeCount++;
            temp = 0;
        }
    }
    cout << squeezeCount << endl;
    return 0;
}
