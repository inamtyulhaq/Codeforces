// https://codeforces.com/problemset/problem/80/A

// iterate from n+1 till m inclusive
// now for every value in the iteration,
// simply keep on dividing it by values from 2 till ((n/2)+1)
// +1 for some edge case of odd numbers
// use a bool integer, set it true for every iteration of division by values from 2 till ((n/2)+1)
// suppose you find that any number in the iteration gets divided (remainder == 0), then simply break from
// internal dividing iteration and go for next outer iteration
// now suppose, your bool is still true even after dividing your number by all values from 2 till ((n/2)+1)
// now there are two cases, either there is a prime between n and m, then cout "NO" and return
// else if that index is m-1, its the last number which is my next prime number after my current prime number n
// then cout "YES"
// if even all this, no condition matches for YES or NO
// it simply means that from n till m (m - inclusive)
// there is no prime number
// for this, simply cout "NO" at the end to indicate this
// "YES" means m is the next prime number
// "NO" means that either prime number is before or after m

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++)
    {
        bool isPrime;
        for (int j = 2; j <= ((i / 2) + 1); j++)
        {
            isPrime = true;
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime && i != m)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (isPrime && i == m)
        {
            cout << "YES" << endl;
            return 0;
        }
        if (!isPrime)
        {
            continue;
        }
    }
    cout << "NO" << endl;
    return 0;
}
