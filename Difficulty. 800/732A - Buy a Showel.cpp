// https://codeforces.com/contest/732/problem/A

// take a count and an increment variable initially as 1
// now start multiplying k with that increment variable
// whenever you find that either it completely divides by 10 (you can buy that minimum number of shovels without any change)
// or either you find that the remainder is equal to r (means you can buy that minium number of showels without
// any change by also using coin of r burles
// can use bool, keep count initially as 0
// else use break by keeping count initially as 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k, r, count = 1, temp = 1;
    cin >> k >> r;
    while (1)
    {
        if ((k * temp) % 10 == r || (k * temp) % 10 == 0)
        {
            break;
        }
        count++;
        temp++;
    }
    cout << count << endl;
    return 0;
}
