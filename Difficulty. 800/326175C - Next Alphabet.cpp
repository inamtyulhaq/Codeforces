// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

// add 1 to characters
// if z, then subtract 25 from it.
// do read last line of the problem statement page

#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c == 'z')
    {
        c -= 25;
    }
    else
    {
        c += 1;
    }
    cout << c;
    return 0;
}
