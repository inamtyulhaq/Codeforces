// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

// nothing, just see if their reminder after division is zero or not

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    if (A % B == 0 || B % A == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }
}
