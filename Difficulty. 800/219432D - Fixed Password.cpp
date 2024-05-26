// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

// simple, do as said in statement

#include <iostream>

using namespace std;

int main()
{
    int X;
    while (cin >> X)
    {
        if (X != 1999)
        {
            cout << "Wrong" << endl;
        }
        else
        {
            cout << "Correct" << endl;
            break;
        }
    }
    return 0;
}
