// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

// subtrat or add ascii difference accordingly
// it is 32 between capital and small letters

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char C;
    cin >> C;
    if (C >= 65 && C <= 91)
    {
        C += 32;
    }
    else if (C >= 97 && C <= 122)
    {
        C -= 32;
    }
    cout << C << endl;
    return 0;
}
