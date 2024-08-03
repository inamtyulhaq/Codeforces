// https://codeforces.com/contest/265/problem/A

// iterate through the string of instructions
// if it matches the corresponding stone color in first string
// increment the position and the index of the first string
// so that next time the next stone is matched with the instruction
// else if the instruction doesn't match with the stone's color
// the instruction will be incremented but neither the position nor the
// index of the first string (the actual stones color we are comparing)
// will be incremented

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int j = 0, position = 1;
    cin >> s >> t;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[j])
        {
            position++;
            j++;
        }
    }
    cout << position;
    return 0;
}
