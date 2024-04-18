// https://codeforces.com/contest/785/problem/A

//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, faces = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str == "Tetrahedron")
        {
            faces += 4;
        }
        else if (str == "Cube")
        {
            faces += 6;
        }
        else if (str == "Octahedron")
        {
            faces += 8;
        }
        else if (str == "Dodecahedron")
        {
            faces += 12;
        }
        else if (str == "Icosahedron")
        {
            faces += 20;
        }
    }
    cout << faces << endl;
    return 0;
}
