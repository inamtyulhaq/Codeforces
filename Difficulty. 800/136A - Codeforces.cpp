// https://codeforces.com/problemset/problem/136/A

// take in the numbers
// it's simple yet tricky
// simply every ith number in the first array you took is 
// the number of that friend who gave gift to the ith person
// in second array, just do indexing manipulation (don't forget +1)
// and put the index of the first array (don't forget +1) to the that index
// of second array which corresponds to the number written on ith (don't forget +1)
// index on array 1
// i know it's a bit complex

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        int j = arr1[i] - 1;
        arr2[j] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    return 0;
}
