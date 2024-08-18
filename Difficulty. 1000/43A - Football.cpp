// https://codeforces.com/contest/43/problem/A

// take in all the strings
// iterate through the string array till half the size of the array
// for every string, simply count how many times it appears
// if the count exceeds any previous count, simply assing this count (temp) to the original count
// and assign the string at the current index of the array to string 's'.
// at the end, output the string 's'

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    string s = " ";
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n / 2; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                temp++;
            }
        }
        if (temp >= count)
        {
            count = temp;
            s = arr[i];
        }
    }
    cout << s << endl;
    return 0;
}
