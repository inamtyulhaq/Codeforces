// Question
// https://codeforces.com/contest/1742/problem/A

// Explanation:
// input three integers
// use if else to see which one is the sum of other two.
// there will be three conditions using OR operator.
// if anyone's true, simply output YES else NO

// Solution:
#include <iostream>
using namespace std;
int main() {
  int t, a, b, c;
  cin >> t;
  while(t--)
  {
    cin >> a >> b >> c;
    if(a+b==c || a+c==b || b+c==a)
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
