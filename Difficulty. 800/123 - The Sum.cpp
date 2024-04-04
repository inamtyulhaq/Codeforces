// Question:
// https://codeforces.com/problemsets/acmsguru/problem/99999/123

// Explanation:
// I have solved this question many times.
// Take a temp variable equal to num0 initially 1.
// take num0 now equal to num1.
// take num1 now equal to sum of its own (num1) and temp. hence the next num updated will be the sum of two previous numbers..
// that's the fibonnaci sequence.. and it continues till you reach k
// keep on adding all temp variables to the sum variable

// Solution:
#include <iostream>
using namespace std;

int main()
{
    int k, num0, num1, sum;
    num0 = 1;
    num1 = 1;
    sum = 0;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int temp = num0;
        num0 = num1;
        num1 = num1 + temp;
        sum = sum + temp;
    }
    cout << sum << endl;
    return 0;
}
