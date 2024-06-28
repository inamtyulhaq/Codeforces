// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

// Input the string using getline() function
// Now iterate using a for loop
// put this condition in the for loop that if any character in the string matches equal to \, simple return 0
// do keep in mind, the syntax of using = '\\', which stands for single back
// otherwise, simply keep on outputting the characters of the string which may or may not include backslashes

#include <iostream>

using namespace std;

int main()
{
    string S;
    getline(cin, S);
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '\\')
        {
            return 0;
        }
        cout << S[i];
    }
}
