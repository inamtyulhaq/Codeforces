#include <iostream>
using namespace std;

int main()
{
    int x, steps, rem1, x1;
    cin >> x;
    if (x <= 5)
    {
        steps = 1;
    }
    else if (x > 5)
    {
        if (x % 5 == 0)
        {
            rem1 = x / 5;
            steps = rem1;
        }
        else
        {
            int rem = x % 5;
            x1 = x - rem;
            rem1 = x1 / 5;
            steps = 1 + rem1;
        }
    }
    cout << steps;
        return 0;
}
