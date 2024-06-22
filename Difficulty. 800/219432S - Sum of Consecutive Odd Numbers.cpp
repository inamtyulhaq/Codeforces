// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

// iterate from small number + 1 till greater number - 1
// do take care when X is greater than Y

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y;
        cin >> X >> Y;
        long long sum = 0;
        if (Y > X)
        {
            for (int i = X + 1; i < Y; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        else
        {
            for (int i = Y + 1; i < X; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
