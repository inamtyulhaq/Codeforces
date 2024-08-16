// https://codeforces.com/contest/670/problem/A

// use conditionals
// if the number of days exactly complete weeks, simply return days at 2 per week for min, max both
// else if you have last week till the 6th day, at min you can have 1 holiday per that week or max two. 
// holidays for previous weeks remain same
// same goes if you got only a day from a week, at max you can have 1 extra holiday. holidays from previous weeks remain same.
// else simply for max, add +2 holidays for any week with other number of days or at min, that week can have no holiday

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = 0, max = 0;
    if (n % 7 == 0)
    {
        cout << (n / 7) * 2 << " " << (n / 7) * 2 << endl;
    }
    else if (n % 7 == 6 || n == 6)
    {
        cout << ((n / 7) * 2) + 1 << " " << ((n / 7) * 2) + 2 << endl;
    }
    else if (n % 7 == 1 || n == 1)
    {
        cout << (n / 7) * 2 << " " << ((n / 7) * 2) + 1 << endl;
    }
    else
    {
        cout << (n / 7) * 2 << " " << (n / 7) * 2 + 2 << endl;
    }

    return 0;
}
