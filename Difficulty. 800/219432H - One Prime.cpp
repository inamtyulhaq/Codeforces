// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

// iterate from 2 till half of X inclusive
// if X divides by any number in iteration, output NO and return
// else after the loop, YES will be printed, indicating that the number is prime

#include <iostream>

using namespace std;

int main()
{
    int X;
    cin >> X;
    for (int i = 2; i <= X / 2; i++)
    {
        if (X % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
