// https://codeforces.com/contest/228/problem/A

// input 4 integers
// simply compare the integer with the previous and other two previous integers..
// see if they match
// if match, then count++
// cout the count

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n[4] = {0}, count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> n[i];
        if (n[i] == n[i - 1] || n[i] == n[i - 2] || n[i] == n[i - 3])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
