// https://codeforces.com/contest/41/problem/A

//

#include <iostream>
#include <string>
using namespace std;

int main()
{
     string s, t;
     cin >> s;
     cin >> t;
     bool b = true;
     int n = s.length();
     for (int i = 0; i < n; i++)
     {
          if (s[i] != t[n - 1 - i])
          {
               b = false;
               break;
          }
     }
     if (b)
     {
          cout << "YES" << endl;
     }
     else
     {
          cout << "NO" << endl;
     }

     return 0;
}
