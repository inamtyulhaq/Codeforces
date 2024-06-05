// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

// identify the character symbol between A and B and output accordingly

#include <iostream>

using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A;
    cin >> S;
    cin >> B;
    if (S == '+')
    {
        cout << A + B << endl;
    }
    else if (S == '-')
    {
        cout << A - B << endl;
    }
    else if (S == '*')
    {
        cout << A * B << endl;
    }
    else if (S == '/')
    {
        cout << A / B << endl;
    }
    return 0;
}
