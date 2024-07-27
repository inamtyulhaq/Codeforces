// https://codeforces.com/problemset/problem/281/A

// simple see if first letter falls in ascii of small letters
// subtract 32 from it

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[0] >= 97 && s[0] <= 122)
    {
        s[0] -= 32;
    }
    cout << s;
    return 0;
}
