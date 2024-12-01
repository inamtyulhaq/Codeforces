// https://codeforces.com/problemset/problem/96/A

// iterate through the string till the 7th element from the end
// check if the next 6 elements are the same as the current element
// if they are, print "YES" and return
// if the loop ends, print "NO"

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string players;
    cin >> players;
    if(players.size() >= 7)
    {
        for(int i = 0; i < players.size() - 6; i++)
        {
            if(players[i] == players[i+1] &&
            players[i] == players[i+2] &&
            players[i] == players[i+3] &&
            players[i] == players[i+4] &&
            players[i] == players[i+5] &&
            players[i] == players[i+6])
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}