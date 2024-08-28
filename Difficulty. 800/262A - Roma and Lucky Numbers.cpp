// https://codeforces.com/contest/262/problem/A

// take in all the integers (take them as a string) in an array
// if the length of any integer is less than or equal to k, leave it, count++
// else if the length of any integer is greater than k, now iterate through the integer
// as it's taken as a string, so easier to iterate through the integer
// see if any integer is equal to 4 or 7, increment a temporary count
// now compare this count with the k
// if this is less than or equal to k, increment
// else the the number of lucky digits is greater than k, 
// which doesn't satisfy our condition
// cout the actual count at the end

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() > k)
        {
            int temp = 0;
            for (int j = 0; j < arr[i].length(); j++)
            {
                if (arr[i][j] == '4' || arr[i][j] == '7')
                {
                    temp++;
                }
            }
            if (temp <= k)
            {
                count++;
            }
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
