// https://codeforces.com/contest/266/problem/A

// Simply, increment the count if any two characters in the string are same.
// That's the required number of stones

#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string stones;
    cin >> stones;
    for (int i = 0; i < stones.length() - 1; i++)
    {
        if (stones[i] == stones[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
