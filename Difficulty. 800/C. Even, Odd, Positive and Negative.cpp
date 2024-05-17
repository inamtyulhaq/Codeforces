// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

// simple input all N numbers
// see if they are positive, negative, divided by 2 or not and simply increment the
// respective even, odd, positive, negative variables
// cout as per said

#include <iostream>
using namespace std;

int main()
{
    int N, A, e = 0, o = 0, p = 0, n = 0;
    cin >> N;
    while (N--)
    {
        cin >> A;
        if (A % 2 == 0)
        {
            e++;
        }
        if (A % 2 != 0)
        {
            o++;
        }
        if (A > 0)
        {
            p++;
        }
        if (A < 0)
        {
            n++;
        }
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;
    return 0;
}
