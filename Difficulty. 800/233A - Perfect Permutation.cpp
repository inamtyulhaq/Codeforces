// https://codeforces.com/problemset/problem/233/A

// from given test cases, i derived the following logic
// if n is not even, simply there is no perfect permutation
// if n is even, simply for any odd and even digit (from 1 till n inclusive),
// firstly print even digit and then odd digit respectively

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0 || n == 1)
    {
        cout << -1;
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
    }
    return 0;
}
