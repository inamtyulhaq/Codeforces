// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

// do it using recursion

#include <iostream>

using namespace std;

long long factorial(long long N)
{
    if (N == 0)
    {
        return 1;
    }
    else
    {
        return N * factorial(N - 1);
    }
}

int main()
{
    long long N;
    cin >> N;
    cout << factorial(N);
    return 0;
}
