// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

// simplest, simply do as said in question

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double R;
    cin >> R;
    double area = pow(R, 2) * 3.141592653;
    cout << fixed << setprecision(9);
    cout << area << endl;
    return 0;
}
