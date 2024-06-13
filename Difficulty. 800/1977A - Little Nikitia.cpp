// https://codeforces.com/contest/1977/problem/A

// I upsolved it using this video solution:
// https://www.youtube.com/watch?v=2Yq1frq4KsE
// firstly, be clear that our answer will only be valid if M cubes are at least N or less than N, not greater than N
// see, just think that your M value is the number of cubes, you used to build the tower initially
// now, to maintain this number till all moves are finished, we would always need even moves, so use this logic of N-M%2==0

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        if ((N - M) % 2 == 0 && (N - M) >= 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
