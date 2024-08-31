// https://codeforces.com/contest/118/problem/A

// iterate through the input string
// find any vowel, simply continue
// find any consonant, append '.' and the lowercase of all the
// uppercase letters to a new string
// return the string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||
            s[i] == 'E' || s[i] == 'I' ||
            s[i] == 'O' || s[i] == 'U' || s[i] == 'y' ||
            s[i] == 'Y')
        {
            continue;
        }
        else
        {
            s1 += '.';
            s1 += tolower(s[i]);
        }
    }
    cout << s1 << endl;
    return 0;
}
