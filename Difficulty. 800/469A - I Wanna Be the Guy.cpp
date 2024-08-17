// https://codeforces.com/contest/469/problem/A

// take in all levels
// use set
// take the levels of Little X and Little Y in a set
// It only takes unique elements in a sorted manner
// now, just compare the size of the set with the total number of levels
// if it matches, it means that they both can complete the whole game working together
// else no

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, temp = 0;
    cin >> n;
    set<int> st;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        st.insert(temp);
    }
    if (st.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}
