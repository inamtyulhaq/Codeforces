// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

// simply divide the number by 10
// and keep on adding its reminder to another integer variable
// leading zeroes won't come in reversed number
// output the reversed number and either its matching then YES
// else output NO

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int on = n;
    int rn = 0;
    while (n > 0)
    {
        int temp = n % 10;
        rn = (rn * 10) + temp;
        n /= 10;
    }
    if (rn == on)
    {
        cout << rn << endl;
        cout << "YES";
    }
    else
    {
        cout << rn << endl;
        cout << "NO";
    }
    return 0;
};
