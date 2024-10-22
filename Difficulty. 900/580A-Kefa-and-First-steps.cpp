// https://codeforces.com/contest/580/problem/A

// take two new variables initially set to 0
// now iterate through the array
// compare every element with its previous element
// if you find it greater, or even same as the previous element
// increment the temp variable
// now if next variable is smaller than the previous variable,
// set temp to 1 again
// now in every iteration, put condition that if max > temp,
// max = temp
// do keep max = 1 in start for the edge case of n = 1

#include <iostream>

using namespace std;

int main()
{
    int n, temp = 1, max = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            temp += 1;
        }
        else
        {
            temp = 1;
        }
        if (temp >= max)
        {
            max = temp;
        }
    }
    cout << max << endl;
    return 0;
}