// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

// input array elements, take the sum
// do remember to convert the -ve number to its +ve equivalence later on

#include <iostream>

using namespace std;

int main()
{
    long long N, sum = 0;
    cin >> N;
    long long arr[N];
    for (long long i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum < 0)
    {
        sum += (0 - sum) * 2;
    }
    cout << sum << endl;
    return 0;
}
