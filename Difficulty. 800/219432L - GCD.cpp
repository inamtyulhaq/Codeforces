// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

// use a loop
// find the minimum of A and B
// loop from minimum of both till 1
// whenever any number divides exactly both A and B, assign it to
// "answer" variable and break the loop
// cout the "answer"

#include <iostream>

using namespace std;
int main()
{
    int A, B, C, ans = 0;
    cin >> A >> B;
    if (A > B)
    {
        C = B;
    }
    else
    {
        C = A;
    }
    for (int i = C; i >= 1; i--)
    {
        if (A % i == 0 && B % i == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
