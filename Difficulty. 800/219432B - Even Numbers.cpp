// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

// simply loop from 2 till that number inclusive, cout if any number in loop divides by 2
// if less than 2, cout -1

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N < 2)
    {
        cout << "-1" << endl;
    }
    else
    {
        for (int i = 2; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}
