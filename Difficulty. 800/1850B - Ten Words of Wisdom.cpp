// Question
// https://codeforces.com/contest/1850/problem/B

// Explanation:
// input n.
// input a and b, n number of times.
// if a <= 10, then see which input's having maximum b.
// max b is taken by comparing with max variable.
// whichever is the max one, also save that index
// output that index

// Solution:
#include <iostream>
using namespace std;
int main() {
  int t, n, a, b, max, ans;
  cin >> t;
  while(t--)
  {
    cin >> n;
    max = 0;
    for(int i = 1; i <= n; i++)
    {
      cin >> a >> b;
      if(a<=10)
      {
        if(b>max)
        {
          max = b;
          ans = i;
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}
