// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

// do it using recursion as per said

#include <iostream>
using namespace std;

void func(int T)
{
    if (T <= 0)
    {
        return;
    }
    else
    {
        func(T - 1);
        cout << T << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    func(N);
    return 0;
}
