// https://codeforces.com/problemset/problem/408/A

// taken in n cashiers
// each cashier has k[i] customers
// each customer has numProducts products
// each product takes 5 seconds to scan
// each cashier takes 15 seconds to get ready
// initialize a temp variable, time 
// for each cashier, calculate the time taken to scan all the products
// if the time is less than the minTime, update minTime
// print minTime

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, minTime = INT_MAX;
    cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    for (int i = 0; i < k.size(); i++)
    {
        int numProducts = 0, time = k[i] * 15;
        for (int j = 0; j < k[i]; j++)
        {
            cin >> numProducts;
            time += numProducts * 5;
        }
        if (time < minTime)
        {
            minTime = time;
        }
    }
    cout << minTime << endl;
    return 0;
}