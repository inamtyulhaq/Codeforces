// Question:
// https://codeforces.com/contest/1941/problem/A

// Explanation:
// Firstly, I inputted the number of coins in left and right pockets and then the max sum accepted by machine.
// Then I took two arrays of sizes of left and right pockets and inputted all denominations of the coins.
// Then I used a nested loop with outer loop iterating till number of left pockets and inner loop iterating till number of right pockets.
// I matched every coin of right pocket with a certain left pocket coin and kept on doing it for all coins.
// If any sum is less than or equal to k, I keep on incrementing the count.
// Finally outputted the count.

// Solution:
#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n];
        int arr1[m];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int j = 0; j < m; j++)
        {
            cin >> arr1[j];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[i]+arr1[j] <= k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
