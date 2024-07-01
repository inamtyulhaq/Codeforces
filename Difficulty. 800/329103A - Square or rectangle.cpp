// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A

// If both values are same, its a square else a rectangle

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int w, h;
        cin >> w >> h;
        if(w==h)
        {
            cout << "Square" << endl;
        }
        else
        {
            cout << "Rectangle" << endl;
        }
    }
    return 0;
}
