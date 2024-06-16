// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

// use a nested if-else loop logic to draw the right angled triangle

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            cout << "*";
        }
        if (i != N)
        {
            cout << endl;
        }
    }
    return 0;
}
