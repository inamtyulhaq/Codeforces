// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O

// use a nested if-else loop

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "*";
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        if (i != n - 1)
        {
            cout << endl;
        }
    }
    return 0;
}
