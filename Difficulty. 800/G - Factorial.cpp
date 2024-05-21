// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

// iterate from N till 2 and keep on multiplying

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        long long factorial = 1;
        for (int i = N; i >= 2; i--)
        {
            factorial *= i;
        }
        cout << factorial << endl;
    }
    return 0;
}
