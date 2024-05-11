// https://codeforces.com/contest/9/problem/A

// simply use if elses to cout all 6 conditions

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;
    int max = W;
    if (Y > W)
    {
        max = Y;
    }
    int D = 6 - max;
    if (D == 0)
    {
        cout << "1" << "/" << "6" << endl;
    }
    else if (D == 1)
    {
        cout << "1" << "/" << "3" << endl;
    }
    else if (D == 2)
    {
        cout << "1" << "/" << "2" << endl;
    }
    else if (D == 3)
    {
        cout << "2" << "/" << "3" << endl;
    }
    else if (D == 4)
    {
        cout << "5" << "/" << "6" << endl;
    }
    else if (D == 5)
    {
        cout << "1" << "/" << "1" << endl;
    }
    return 0;
}
