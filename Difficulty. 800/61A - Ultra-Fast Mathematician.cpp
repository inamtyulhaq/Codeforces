// https://codeforces.com/problemset/problem/61/A

// simply take another string
// as the length of both numbers is same
// so iterate through their length
// if any two values at correspoding indexes don't match, append 1 to answer string
// else append 0

#include <iostream>

using namespace std;

int main()
{
    string num1, num2, answer;
    cin >> num1;
    cin >> num2;
    for (int i = 0; i < num1.size(); i++)
    {
        if (num1[i] != num2[i])
        {
            answer += '1';
        }
        else
        {
            answer += '0';
        }
    }
    cout << answer << endl;
    return 0;
}
