// https://codeforces.com/group/MWSDmqGsZm/contest/326175/my

// use simple if-else loops

#include <iostream>

using namespace std;

int main()
{
    long long a, b, k;
    cin >> a >> b >> k;
    if (b % k == 0 && a % k == 0)
    {
        cout << "Both";
    }
    else if (b % k == 0 && a % k != 0)
    {
        cout << "Momo";
    }
    else if (b % k != 0 && a % k == 0)
    {
        cout << "Memo";
    }
    else
    {
        cout << "No One";
    }
    return 0;
}
