// https://codeforces.com/contest/344/problem/A

//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    string l[n];
    for(int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for(int i = 0; i < n-1; i++)
    {
        if(l[i] != l[i+1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
