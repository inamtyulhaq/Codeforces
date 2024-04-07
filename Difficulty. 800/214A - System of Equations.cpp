// https://codeforces.com/contest/214/problem/A

//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     int n, m, count = 0;
     cin >> n >> m;
     for (int i = 0; i <= n; i++)
     {
          for (int j = 0; j <= m; j++)
          {
               if (pow(i, 2) + j == n && pow(j, 2) + i == m)
               {
                    count++;
               }
          }
     }
     cout << count << endl;
     return 0;
}
