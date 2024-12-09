// https://codeforces.com/problemset/problem/122/A

// as the input is small
// make a vector of all lucky numbers before 1000
// now simply divide n by all of them
// if you find n divisible by any of them, cout YES
// else NO at the end

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // defining an array of lucky numbers
    // as the input range is given and is also small

    vector<int> luckyNums = {};
    auto &ln = luckyNums;
    int i = 0;

    ln.push_back(4);
    ln.push_back(7);
    ln.push_back(44);
    ln.push_back(47);
    ln.push_back(74);
    ln.push_back(77);
    ln.push_back(444);
    ln.push_back(447);
    ln.push_back(474);
    ln.push_back(477);
    ln.push_back(744);
    ln.push_back(747);
    ln.push_back(774);
    ln.push_back(777);

    while (i != ln.size())
    {
        if (n % ln[i] == 0)
        {
            cout << "YES\n";
            return 0;
        }
        i++;
    }
    cout << "NO\n";
    return 0;
}