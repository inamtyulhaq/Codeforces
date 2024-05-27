// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

// loop from 2 till N
// see if any number is prime or not by
// looping from 2 till that number and using bool check
// to see, if that number is divisible by any other number or not

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i;
            if (i != N)
            {
                cout << " ";
            }
        }
    }
    return 0;
}
