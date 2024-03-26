// https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P43

// just did it..
// simply make a loop and add all integers from 1 till N and also 1 at the end to an array
// Now except first and second element, multiply all other numbers
// cout multiply

#include <iostream>
using namespace std;

int main()
{
    long long N, multiply, sum = 0;
    cin >> N;
    int arr[N + 1];

    for (int i = 0; i < N + 1; i++)
    {
        arr[i] = i + 1;
        if (arr[i] == N + 1)
        {
            arr[i] = 1;
        }
    }
    for (int i = 0; i < 1; i++)
    {
        multiply = 1;
        int a = arr[i];
        int b = arr[i];
        for (int j = 0; j < N + 1; j++)
        {
            if (arr[j] == a)
            {
                multiply *= 1;
            }
            else if (arr[j] == b)
            {
                multiply *= 1;
            }
            else
            {
                multiply *= arr[j];
            }
        }
        cout << multiply << endl;
    }

    return 0;
}
