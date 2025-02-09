// https://codeforces.com/problemset/problem/2065/A

// see the problem statement
// no need to even use the if statement
// simple replace second last character with 'i'
// and remove the last character using the string function
// return

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[s.size()-1] == 's' && s[s.size()-2] == 'u')
        {
            s[s.size()-2] = 'i';
            s.erase(s.begin() + s.size()-1);
        }
        cout << s << endl;
    }
    return 0;
}