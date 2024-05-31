// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

// simple take in inputs and use if else conditions to solve the problem
// a simple brute force approach

#include <iostream>

using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A;
    cin >> S;
    cin >> B;

    if (A > B && S == '>')
    {
        cout << "Right" << endl;
    }
    else if (A > B && S != '>')
    {
        cout << "Wrong" << endl;
    }
    else if (A < B && S == '<')
    {
        cout << "Right" << endl;
    }
    else if (A < B && S != '<')
    {
        cout << "Wrong" << endl;
    }
    else if (A == B && S == '=')
    {
        cout << "Right" << endl;
    }
    else if (A == B && S != '=')
    {
        cout << "Wrong" << endl;
    }

    return 0;
}
