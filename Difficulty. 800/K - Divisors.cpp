// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

// iterate from 1 till N
// if N % i == 0, simply cout i with endl

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
