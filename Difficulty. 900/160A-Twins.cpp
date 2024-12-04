// https://codeforces.com/problemset/problem/160/A

// taken in coin values in an array
// take the total value of the coins in a sum variable
// now sort the array in descending order because we want to take minimum number of coins
// now take a tempSum variable and iterate through the array
// add the value of the current coin to the tempSum and increment the number of coins
// if the tempSum is greater than half the total sum, then print the number of coins and break the loop

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, numCoins = 0, tempSum = 0, sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        tempSum += arr[i];
        numCoins++;
        if (tempSum > sum / 2)
        {
            cout << numCoins;
            break;
        }
    }
    return 0;
}