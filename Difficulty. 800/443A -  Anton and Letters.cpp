// https://codeforces.com/contest/443/problem/A

// iterate through the length of string
// see if character at any index of string matches the ascii of small characters (not necessary - see question)
// use loop again to find out if it's unique or not in the set
// increment count accordingly

#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 1; i < s.size(); i += 3)
    {
        bool cameAgain = false;
        if (s[i] >= 97 && s[i] <= 122)
        {
            for (int j = 1; j < i; j += 3)
            {
                if (s[i] == s[j])
                {
                    cameAgain = true;
                    break;
                }
            }
        }
        if (cameAgain)
        {
            count += 0;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
