// https://codeforces.com/problemset/problem/339/A

// ok, go from the second integer from every string (index i = 2)
// now use an inner (nested) for loop to compare all previous elements with the current element
// if you find any previous element greater than the current element, simply swap them

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 2; i < s.size(); i += 2)
    {
        for (int j = 0; j < i; j += 2)
        {
            if (s[i] < s[j])
            {
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
            }
        }
    }
    cout << s << endl;
    return 0;
}
