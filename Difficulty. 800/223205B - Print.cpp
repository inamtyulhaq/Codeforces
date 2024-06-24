// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

// simply print from 1 till N

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cout << i;
        if (i != N)
        {
            cout << " ";
        }
    }
    return 0;
}
