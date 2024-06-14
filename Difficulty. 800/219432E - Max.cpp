// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

// take a variable "max" = 0 in start
// if any number being inputted is greater than max, put that number equal to max
// cout the max

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    long long arr[N];
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}
