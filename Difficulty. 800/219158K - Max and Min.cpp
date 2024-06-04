// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

// use if else loops to find min and max
// do take care that if two numbers are same and third is different
// answers may vary in that situation
// us >= & <= situation in that case

#include <iostream>

using namespace std;

int main()
{

    long long A, B, C;
    cin >> A >> B >> C;
    long long D = 0, F = 0;
    if (A > B && A > C || A >= B && A > C || A >= C && A > B)
    {
        D = A;
    }
    else if (B > A && B > C || B >= A && B > C || B >= C && B > A)
    {
        D = B;
    }
    else
    {
        D = C;
    }

    if (A < B && A < C || A <= B && A < C || A <= C && A < B)
    {
        F = A;
    }
    else if (B < A && B < C || B <= A && B < C || B <= C && B < A)
    {
        F = B;
    }
    else
    {
        F = C;
    }
    cout << F << " " << D << endl;

    return 0;
}
