// https://codeforces.com/contest/479/problem/A

// Remember the key point in the problem statement,
// "You can only insert operation between a and b and then between b and c"
// Not between a and c.
// So two ifs of multiplication and addition of all
// two ifs of addition inside brackets and multiplication with the third variable outside
// two ifs of multiplication inside brackets and addition with the third variable outside
// You got your max answer

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = 0;
    if (a + b + c > max)
    {
        max = a + b + c;
    }
    if (a * b * c > max)
    {
        max = a * b * c;
    }
    if ((a * b) + c > max)
    {
        max = (a * b) + c;
    }
    if ((a + (b * c)) > max)
    {
        max = a + (b * c);
    }

    if ((a + b) * c > max)
    {
        max = (a + b) * c;
    }
    if ((a * (b + c)) > max)
    {
        max = a * (b + c);
    }
    cout << max << endl;
    return 0;
}
