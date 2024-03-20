// Question:
// https://codeforces.com/contest/677/problem/A

// Explanation:
// For all heights greater than Fence's height, keep a count.
// Increment it if any height is greater than Fence's height.
// Now subtract it from the total no. of friends.
// All remaining friends have width 1.
// Other friends (equal to count) have width 2 (multiply count by 2 simply).
// Simply cout the sum of all all friends having width 1 and width 2.

// Solution:
#include <iostream>
using namespace std;

int main()
{
    int n, m, a, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > m)
        {
            count++;
        }
    }
    int c = n - count;
    int d = count * 2;
    cout << c + d << endl;
    return 0;
}
