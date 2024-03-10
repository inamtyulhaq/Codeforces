// Question
// https://codeforces.com/problemset/problem/750/A

// Explanation:
// subtract the number of remaining minutes from 240 (4hours).
// take another variable as 0. sum it up with i iterating till n inclusive.
// i will be multiplied with 5 everytime, adding up with the variable simultaneously.
// if the variable is less than remaining minutes, keep on incrementing count.
// output the count or for that matter, the number of problems.

// Solution:
#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int k1 = 240 - k;
  int p = 0;
  int p1 = 0;
  for(int i = 1; i <= n; i++)
  {
      p1 = p1 + i * 5;
      if(p1 <= k1)
      {
        p++;
      }
  }

  cout << p << endl;

  return 0;
}
