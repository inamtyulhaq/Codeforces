// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

// take two strings as input
// print their length using .length() function
// simply output the strings
// do take it mind the formatting

#include <iostream>

using namespace std;

int main()
{
    string S, T;
    getline(cin, S), getline(cin, T);
    cout << S.length() << " " << T.length() << "\n"
         << S << " " << T << endl;
    return 0;
}
