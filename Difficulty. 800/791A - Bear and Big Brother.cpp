// Question:
// https://codeforces.com/contest/791/problem/A

// Explanation:
// Keep on mutliplying a by 2 and b by 3 until a is strictly
// remember strictly greater than b.
// keep on incrementing the years count.

// Solution:
#include <iostream>
using namespace std;

int main()
{
    int a, b, years = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        years++;
    }
    cout << years << endl;
    return 0;
}
