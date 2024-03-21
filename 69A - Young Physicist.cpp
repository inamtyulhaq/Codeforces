// https://codeforces.com/contest/69/problem/A

// Vector will be in equilibrium if sum of all vectors's equal to 0.
// For large no. of forces, it will be like this.
// There are three coordinates of a vector, consider indexes as i, j, k.
// Make an array
// Now sum all i, j and k's of all vectors ( basically their indeces).
// if sum of all three for all vectors is 0, output "YES", else output "NO".

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, a = 0, b = 0, c = 0;
    int x[3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x[j];
        }
        a = a + x[0];
        b = b + x[1];
        c = c + x[2];
    }
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
