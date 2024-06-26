// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A

// if a is greater than b, print their sum
// else cout 0

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << a - b << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}
