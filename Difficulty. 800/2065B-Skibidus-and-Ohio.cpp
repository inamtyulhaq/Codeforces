// https://codeforces.com/problemset/problem/2065/B

// there is a simple trick
// if even there is a single duplicate character
// it means that the length of that string will ultimately
// be reduced to 1
// else the length of string will remain as it is

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        bool isDuplicate = false;
        cin >> s;
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1])
            {
                cout << 1 << endl;
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
        {
            cout << s.size() << endl;
        }
    }
    return 0;
}