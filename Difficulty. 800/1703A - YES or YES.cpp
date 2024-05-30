// Question
// https://codeforces.com/contest/1703/problem/A

// Explanation:
// iterate through three characters of the inputted string.
// there will always be three characters for sure.
// if any character isn't found equal to Yy,Ee,Ss respectively,
// output NO else YES

// Solution:
#include <iostream>
#include <string>
using namespace std;
int main() {
  int t;
  string s;
  cin >> t;
  while(t--)
  {
    cin >> s;
      if((s[0]!='Y' && s[0]!='y') || (s[1]!='E' && s[1]!='e') || (s[2]!='S' && s[2]!='s'))
      {
        cout << "NO" << endl;
      }
      else
      {
        cout << "YES" << endl;
      }
  }
  return 0;
}
