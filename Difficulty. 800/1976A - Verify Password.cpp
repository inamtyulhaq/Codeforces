// https://codeforces.com/contest/1976/problem/A

// clearly see out the conditions firstly
// check if the this index and next index of the string are characters and that the next character is greater than previous character, its NO, break..
// check if the this index and next index of the string are digits and that the next digit is greater than previous digit, its NO, break..
// see if this index is a literal and that the next index of the string is a digit, its NO, break
// else its a YES. It's a STRONG password

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;
        bool isStrong = true;
        cin >> n;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z' && str[i + 1] >= '0' && str[i + 1] <= '9')
            {
                isStrong = false;
                break;
            }
            else if (str[i] >= '0' && str[i] <= '9' && str[i + 1] >= '0' && str[i + 1] <= '9' && str[i] > str[i + 1])
            {
                isStrong = false;
                break;
            }
            else if (str[i] >= 'a' && str[i] <= 'z' && str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i] > str[i + 1])
            {
                isStrong = false;
                break;
            }
        }
        if (isStrong == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
