// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

// simply input the array
// take another array of same size
// and input all elements of the first array starting from 1st index till last
// in reverse manner such that
// first element of first array goes to the last index of the second array
// second element of first array goes to second last index of the second array
// ...
// last element of first array goes to the first index of the second array

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    int revArr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        revArr[N - i - 1] = arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << revArr[i];
        if (i != N - 1)
        {
            cout << ' ';
        }
    }
    return 0;
}
