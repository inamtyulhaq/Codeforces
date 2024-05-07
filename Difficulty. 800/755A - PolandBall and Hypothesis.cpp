// https://codeforces.com/problemset/problem/755/A

// Use two for loops
// In outer loop, do n*m+1; m is i here.
// In inner loop, check for that is it divisble by any number from 2 till that number
// Simply use a bool and cout the answer

#include <iostream>

using namespace std;

int main()
{
    int n, answer;
    bool br = false;
    cin >> n;
    for (int i = 1; i < 1000; i++)
    {
        int c = 0;
        c = n * i;
        c = c + 1;
        for (int j = 2; j < c; j++)
        {
            if (c % j == 0)
            {
                answer = i;
                br = true;
            }
        }
        if (br == true)
        {
            break;
        }
    }
    cout << answer << endl;
    return 0;
}
