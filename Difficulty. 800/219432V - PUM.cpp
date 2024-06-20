// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

// just loop, increment the i by 4 to fulfill the given condition

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N * 4; i += 4)
    {
        cout << i << " " << i + 1 << " " << i + 2 << " " << "PUM" << endl;
    }
    return 0;
}
