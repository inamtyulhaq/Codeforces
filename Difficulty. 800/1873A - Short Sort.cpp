// https://codeforces.com/contest/1873/problem/A

// 

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          string s;
          cin >> s;
          if (s == "abc" || s == "acb" || s == "bac" || s == "cba")
          {
               cout << "YES" << endl;
          }
          else
          {
               cout << "NO" << endl;
          }
     }
     return 0;
}
