// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

// do it using function as per said in question
// return long long, see the range of X and Y, you would understand

#include <iostream>

using namespace std;

long long add(int X, int Y)
{
    return X + Y;
}

int main()
{
    int X, Y;
    cin >> X >> Y;
    cout << add(X, Y) << endl;
    return 0;
}
