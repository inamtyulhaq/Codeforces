// https://codeforces.com/contest/495/problem/A

// firstly develop logic of how many numbers 'x' can be changed to
// if any or some sticks are broken
// then take an integer in main (initially 1)
// may take string, may take integer (do handle 00/edge cases for int)
// i took as a string, type casted it everytime to an integer and
// performed calculation
// cout

#include <bits/stdc++.h>

using namespace std;

int getGoodIntegersCount(int x)
{
    if (x == 0 || x == 2 || x == 6 || x == 9)
    {
        return 2;
    }
    else if (x == 3 || x == 4)
    {
        return 3;
    }
    else if (x == 1)
    {
        return 7;
    }
    else if (x == 5)
    {
        return 4;
    }
    else if (x == 7)
    {
        return 5;
    }
    else if (x == 8)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int goodIntegers = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int temp = static_cast<int>(s[i]) - '0';
        goodIntegers *= getGoodIntegersCount(temp);
    }
    cout << goodIntegers << endl;
    return 0;
}