// https://codeforces.com/contest/758/problem/A

// take an array and input the welfare of all n citizens
// alongside, fine the max element in the array, while inputting
// iterate again and subtract elements at all indexes of the array from the max element found out earlier
// and sum up the result to another variable and cout

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, aMax = 0, burles = 0;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > aMax)
        {
            aMax = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        burles += aMax - arr[i];
    }
    cout << burles << endl;
    return 0;
}
