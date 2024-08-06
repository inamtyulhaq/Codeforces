// https://codeforces.com/contest/731/problem/A

// for the first index, there is different logic
// subtract 'a' from it and it from 'a'
// else subtract s[i] from s[i-1] and vice versa
// now subtract the integer variable from 26 in both cases if the answer is greater than 13 or less than -13 
// (because we have a wheel, having 25 characters) - (subtracting from 26 is a valid logic here)
// now if both are greater than 0 (those subtracted by 26), add smaller value to rotations
// else add larger value to rotations (those not subtracted by 26)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rotations = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int temp = 0, temp1 = 0;
        if (i == 0)
        {
            temp = s[i] - 'a';
            temp1 = 'a' - s[i];
        }
        else
        {
            temp = s[i] - s[i - 1];
            temp1 = s[i - 1] - s[i];
        }
        if (temp > 13 && temp1 < -13 || temp < -13 && temp1 > 13)
        {
            temp = 26 - temp;
            temp1 = 26 - temp1;
        }
        if (temp >= 0 && temp1 >= 0)
        {
            if (temp < temp1)
            {
                rotations += temp;
            }
            else
            {
                rotations += temp1;
            }
        }
        else
        {
            if (temp > temp1)
            {
                rotations += temp;
            }
            else
            {
                rotations += temp1;
            }
        }
    }
    cout << rotations << endl;
    return 0;
}
